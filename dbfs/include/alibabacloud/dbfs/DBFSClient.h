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

#ifndef ALIBABACLOUD_DBFS_DBFSCLIENT_H_
#define ALIBABACLOUD_DBFS_DBFSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DBFSExport.h"
#include "model/AttachDbfsRequest.h"
#include "model/AttachDbfsResult.h"
#include "model/CreateDbfsRequest.h"
#include "model/CreateDbfsResult.h"
#include "model/DeleteDbfsRequest.h"
#include "model/DeleteDbfsResult.h"
#include "model/DetachDbfsRequest.h"
#include "model/DetachDbfsResult.h"
#include "model/GetDbfsRequest.h"
#include "model/GetDbfsResult.h"
#include "model/ListDbfsRequest.h"
#include "model/ListDbfsResult.h"
#include "model/ResizeDbfsRequest.h"
#include "model/ResizeDbfsResult.h"


namespace AlibabaCloud
{
	namespace DBFS
	{
		class ALIBABACLOUD_DBFS_EXPORT DBFSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachDbfsResult> AttachDbfsOutcome;
			typedef std::future<AttachDbfsOutcome> AttachDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::AttachDbfsRequest&, const AttachDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDbfsAsyncHandler;
			typedef Outcome<Error, Model::CreateDbfsResult> CreateDbfsOutcome;
			typedef std::future<CreateDbfsOutcome> CreateDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::CreateDbfsRequest&, const CreateDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDbfsAsyncHandler;
			typedef Outcome<Error, Model::DeleteDbfsResult> DeleteDbfsOutcome;
			typedef std::future<DeleteDbfsOutcome> DeleteDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DeleteDbfsRequest&, const DeleteDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDbfsAsyncHandler;
			typedef Outcome<Error, Model::DetachDbfsResult> DetachDbfsOutcome;
			typedef std::future<DetachDbfsOutcome> DetachDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DetachDbfsRequest&, const DetachDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDbfsAsyncHandler;
			typedef Outcome<Error, Model::GetDbfsResult> GetDbfsOutcome;
			typedef std::future<GetDbfsOutcome> GetDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::GetDbfsRequest&, const GetDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDbfsAsyncHandler;
			typedef Outcome<Error, Model::ListDbfsResult> ListDbfsOutcome;
			typedef std::future<ListDbfsOutcome> ListDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListDbfsRequest&, const ListDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDbfsAsyncHandler;
			typedef Outcome<Error, Model::ResizeDbfsResult> ResizeDbfsOutcome;
			typedef std::future<ResizeDbfsOutcome> ResizeDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ResizeDbfsRequest&, const ResizeDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDbfsAsyncHandler;

			DBFSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DBFSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DBFSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DBFSClient();
			AttachDbfsOutcome attachDbfs(const Model::AttachDbfsRequest &request)const;
			void attachDbfsAsync(const Model::AttachDbfsRequest& request, const AttachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDbfsOutcomeCallable attachDbfsCallable(const Model::AttachDbfsRequest& request) const;
			CreateDbfsOutcome createDbfs(const Model::CreateDbfsRequest &request)const;
			void createDbfsAsync(const Model::CreateDbfsRequest& request, const CreateDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDbfsOutcomeCallable createDbfsCallable(const Model::CreateDbfsRequest& request) const;
			DeleteDbfsOutcome deleteDbfs(const Model::DeleteDbfsRequest &request)const;
			void deleteDbfsAsync(const Model::DeleteDbfsRequest& request, const DeleteDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDbfsOutcomeCallable deleteDbfsCallable(const Model::DeleteDbfsRequest& request) const;
			DetachDbfsOutcome detachDbfs(const Model::DetachDbfsRequest &request)const;
			void detachDbfsAsync(const Model::DetachDbfsRequest& request, const DetachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDbfsOutcomeCallable detachDbfsCallable(const Model::DetachDbfsRequest& request) const;
			GetDbfsOutcome getDbfs(const Model::GetDbfsRequest &request)const;
			void getDbfsAsync(const Model::GetDbfsRequest& request, const GetDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDbfsOutcomeCallable getDbfsCallable(const Model::GetDbfsRequest& request) const;
			ListDbfsOutcome listDbfs(const Model::ListDbfsRequest &request)const;
			void listDbfsAsync(const Model::ListDbfsRequest& request, const ListDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDbfsOutcomeCallable listDbfsCallable(const Model::ListDbfsRequest& request) const;
			ResizeDbfsOutcome resizeDbfs(const Model::ResizeDbfsRequest &request)const;
			void resizeDbfsAsync(const Model::ResizeDbfsRequest& request, const ResizeDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeDbfsOutcomeCallable resizeDbfsCallable(const Model::ResizeDbfsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DBFS_DBFSCLIENT_H_
