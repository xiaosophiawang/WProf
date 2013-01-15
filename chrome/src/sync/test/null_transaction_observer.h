// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SYNC_TEST_NULL_TRANSACTION_OBSERVER_H_
#define SYNC_TEST_NULL_TRANSACTION_OBSERVER_H_
#pragma once

#include "sync/internal_api/public/util/weak_handle.h"

namespace syncer {
namespace syncable {

class TransactionObserver;

// Returns an initialized weak handle to a transaction observer that
// does nothing.
syncer::WeakHandle<TransactionObserver> NullTransactionObserver();

}  // namespace syncable
}  // namespace syncer

#endif  // SYNC_TEST_NULL_TRANSACTION_OBSERVER_H_