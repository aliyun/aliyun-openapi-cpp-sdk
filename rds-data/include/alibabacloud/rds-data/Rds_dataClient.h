/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_RDS_DATA_RDS_DATACLIENT_H_
#define ALIBABACLOUD_RDS_DATA_RDS_DATACLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Rds_dataExport.h"
#include "model/BatchExecuteStatementRequest.h"
#include "model/BatchExecuteStatementResult.h"
#include "model/BeginTransactionRequest.h"
#include "model/BeginTransactionResult.h"
#include "model/CommitTransactionRequest.h"
#include "model/CommitTransactionResult.h"
#include "model/DeleteRequest.h"
#include "model/DeleteResult.h"
#include "model/ExecuteStatementRequest.h"
#include "model/ExecuteStatementResult.h"
#include "model/InsertRequest.h"
#include "model/InsertResult.h"
#include "model/InsertListRequest.h"
#include "model/InsertListResult.h"
#include "model/RollbackTransactionRequest.h"
#include "model/RollbackTransactionResult.h"
#include "model/SelectRequest.h"
#include "model/SelectResult.h"
#include "model/UpdateRequest.h"
#include "model/UpdateResult.h"


namespace AlibabaCloud
{
	namespace Rds_data
	{
		class ALIBABACLOUD_RDS_DATA_EXPORT Rds_dataClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchExecuteStatementResult> BatchExecuteStatementOutcome;
			typedef std::future<BatchExecuteStatementOutcome> BatchExecuteStatementOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::BatchExecuteStatementRequest&, const BatchExecuteStatementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchExecuteStatementAsyncHandler;
			typedef Outcome<Error, Model::BeginTransactionResult> BeginTransactionOutcome;
			typedef std::future<BeginTransactionOutcome> BeginTransactionOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::BeginTransactionRequest&, const BeginTransactionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BeginTransactionAsyncHandler;
			typedef Outcome<Error, Model::CommitTransactionResult> CommitTransactionOutcome;
			typedef std::future<CommitTransactionOutcome> CommitTransactionOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::CommitTransactionRequest&, const CommitTransactionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitTransactionAsyncHandler;
			typedef Outcome<Error, Model::DeleteResult> DeleteOutcome;
			typedef std::future<DeleteOutcome> DeleteOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::DeleteRequest&, const DeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsyncHandler;
			typedef Outcome<Error, Model::ExecuteStatementResult> ExecuteStatementOutcome;
			typedef std::future<ExecuteStatementOutcome> ExecuteStatementOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::ExecuteStatementRequest&, const ExecuteStatementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteStatementAsyncHandler;
			typedef Outcome<Error, Model::InsertResult> InsertOutcome;
			typedef std::future<InsertOutcome> InsertOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::InsertRequest&, const InsertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertAsyncHandler;
			typedef Outcome<Error, Model::InsertListResult> InsertListOutcome;
			typedef std::future<InsertListOutcome> InsertListOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::InsertListRequest&, const InsertListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertListAsyncHandler;
			typedef Outcome<Error, Model::RollbackTransactionResult> RollbackTransactionOutcome;
			typedef std::future<RollbackTransactionOutcome> RollbackTransactionOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::RollbackTransactionRequest&, const RollbackTransactionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackTransactionAsyncHandler;
			typedef Outcome<Error, Model::SelectResult> SelectOutcome;
			typedef std::future<SelectOutcome> SelectOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::SelectRequest&, const SelectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SelectAsyncHandler;
			typedef Outcome<Error, Model::UpdateResult> UpdateOutcome;
			typedef std::future<UpdateOutcome> UpdateOutcomeCallable;
			typedef std::function<void(const Rds_dataClient*, const Model::UpdateRequest&, const UpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAsyncHandler;

			Rds_dataClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Rds_dataClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Rds_dataClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Rds_dataClient();
			BatchExecuteStatementOutcome batchExecuteStatement(const Model::BatchExecuteStatementRequest &request)const;
			void batchExecuteStatementAsync(const Model::BatchExecuteStatementRequest& request, const BatchExecuteStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchExecuteStatementOutcomeCallable batchExecuteStatementCallable(const Model::BatchExecuteStatementRequest& request) const;
			BeginTransactionOutcome beginTransaction(const Model::BeginTransactionRequest &request)const;
			void beginTransactionAsync(const Model::BeginTransactionRequest& request, const BeginTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BeginTransactionOutcomeCallable beginTransactionCallable(const Model::BeginTransactionRequest& request) const;
			CommitTransactionOutcome commitTransaction(const Model::CommitTransactionRequest &request)const;
			void commitTransactionAsync(const Model::CommitTransactionRequest& request, const CommitTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitTransactionOutcomeCallable commitTransactionCallable(const Model::CommitTransactionRequest& request) const;
			DeleteOutcome delete(const Model::DeleteRequest &request)const;
			void deleteAsync(const Model::DeleteRequest& request, const DeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOutcomeCallable deleteCallable(const Model::DeleteRequest& request) const;
			ExecuteStatementOutcome executeStatement(const Model::ExecuteStatementRequest &request)const;
			void executeStatementAsync(const Model::ExecuteStatementRequest& request, const ExecuteStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteStatementOutcomeCallable executeStatementCallable(const Model::ExecuteStatementRequest& request) const;
			InsertOutcome insert(const Model::InsertRequest &request)const;
			void insertAsync(const Model::InsertRequest& request, const InsertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertOutcomeCallable insertCallable(const Model::InsertRequest& request) const;
			InsertListOutcome insertList(const Model::InsertListRequest &request)const;
			void insertListAsync(const Model::InsertListRequest& request, const InsertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertListOutcomeCallable insertListCallable(const Model::InsertListRequest& request) const;
			RollbackTransactionOutcome rollbackTransaction(const Model::RollbackTransactionRequest &request)const;
			void rollbackTransactionAsync(const Model::RollbackTransactionRequest& request, const RollbackTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackTransactionOutcomeCallable rollbackTransactionCallable(const Model::RollbackTransactionRequest& request) const;
			SelectOutcome select(const Model::SelectRequest &request)const;
			void selectAsync(const Model::SelectRequest& request, const SelectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SelectOutcomeCallable selectCallable(const Model::SelectRequest& request) const;
			UpdateOutcome update(const Model::UpdateRequest &request)const;
			void updateAsync(const Model::UpdateRequest& request, const UpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOutcomeCallable updateCallable(const Model::UpdateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RDS_DATA_RDS_DATACLIENT_H_
