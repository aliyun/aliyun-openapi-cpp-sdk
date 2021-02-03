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

#ifndef ALIBABACLOUD_EAIS_EAISCLIENT_H_
#define ALIBABACLOUD_EAIS_EAISCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EaisExport.h"
#include "model/AttachEaiRequest.h"
#include "model/AttachEaiResult.h"
#include "model/CreateEaiRequest.h"
#include "model/CreateEaiResult.h"
#include "model/CreateEaiAllRequest.h"
#include "model/CreateEaiAllResult.h"
#include "model/DeleteEaiRequest.h"
#include "model/DeleteEaiResult.h"
#include "model/DeleteEaiAllRequest.h"
#include "model/DeleteEaiAllResult.h"
#include "model/DescribeEaisRequest.h"
#include "model/DescribeEaisResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DetachEaiRequest.h"
#include "model/DetachEaiResult.h"
#include "model/GetPrivateIpRequest.h"
#include "model/GetPrivateIpResult.h"


namespace AlibabaCloud
{
	namespace Eais
	{
		class ALIBABACLOUD_EAIS_EXPORT EaisClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachEaiResult> AttachEaiOutcome;
			typedef std::future<AttachEaiOutcome> AttachEaiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::AttachEaiRequest&, const AttachEaiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachEaiAsyncHandler;
			typedef Outcome<Error, Model::CreateEaiResult> CreateEaiOutcome;
			typedef std::future<CreateEaiOutcome> CreateEaiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::CreateEaiRequest&, const CreateEaiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEaiAsyncHandler;
			typedef Outcome<Error, Model::CreateEaiAllResult> CreateEaiAllOutcome;
			typedef std::future<CreateEaiAllOutcome> CreateEaiAllOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::CreateEaiAllRequest&, const CreateEaiAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEaiAllAsyncHandler;
			typedef Outcome<Error, Model::DeleteEaiResult> DeleteEaiOutcome;
			typedef std::future<DeleteEaiOutcome> DeleteEaiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DeleteEaiRequest&, const DeleteEaiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEaiAsyncHandler;
			typedef Outcome<Error, Model::DeleteEaiAllResult> DeleteEaiAllOutcome;
			typedef std::future<DeleteEaiAllOutcome> DeleteEaiAllOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DeleteEaiAllRequest&, const DeleteEaiAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEaiAllAsyncHandler;
			typedef Outcome<Error, Model::DescribeEaisResult> DescribeEaisOutcome;
			typedef std::future<DescribeEaisOutcome> DescribeEaisOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DescribeEaisRequest&, const DescribeEaisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEaisAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DetachEaiResult> DetachEaiOutcome;
			typedef std::future<DetachEaiOutcome> DetachEaiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DetachEaiRequest&, const DetachEaiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachEaiAsyncHandler;
			typedef Outcome<Error, Model::GetPrivateIpResult> GetPrivateIpOutcome;
			typedef std::future<GetPrivateIpOutcome> GetPrivateIpOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::GetPrivateIpRequest&, const GetPrivateIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrivateIpAsyncHandler;

			EaisClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EaisClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EaisClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EaisClient();
			AttachEaiOutcome attachEai(const Model::AttachEaiRequest &request)const;
			void attachEaiAsync(const Model::AttachEaiRequest& request, const AttachEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachEaiOutcomeCallable attachEaiCallable(const Model::AttachEaiRequest& request) const;
			CreateEaiOutcome createEai(const Model::CreateEaiRequest &request)const;
			void createEaiAsync(const Model::CreateEaiRequest& request, const CreateEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEaiOutcomeCallable createEaiCallable(const Model::CreateEaiRequest& request) const;
			CreateEaiAllOutcome createEaiAll(const Model::CreateEaiAllRequest &request)const;
			void createEaiAllAsync(const Model::CreateEaiAllRequest& request, const CreateEaiAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEaiAllOutcomeCallable createEaiAllCallable(const Model::CreateEaiAllRequest& request) const;
			DeleteEaiOutcome deleteEai(const Model::DeleteEaiRequest &request)const;
			void deleteEaiAsync(const Model::DeleteEaiRequest& request, const DeleteEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEaiOutcomeCallable deleteEaiCallable(const Model::DeleteEaiRequest& request) const;
			DeleteEaiAllOutcome deleteEaiAll(const Model::DeleteEaiAllRequest &request)const;
			void deleteEaiAllAsync(const Model::DeleteEaiAllRequest& request, const DeleteEaiAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEaiAllOutcomeCallable deleteEaiAllCallable(const Model::DeleteEaiAllRequest& request) const;
			DescribeEaisOutcome describeEais(const Model::DescribeEaisRequest &request)const;
			void describeEaisAsync(const Model::DescribeEaisRequest& request, const DescribeEaisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEaisOutcomeCallable describeEaisCallable(const Model::DescribeEaisRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DetachEaiOutcome detachEai(const Model::DetachEaiRequest &request)const;
			void detachEaiAsync(const Model::DetachEaiRequest& request, const DetachEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachEaiOutcomeCallable detachEaiCallable(const Model::DetachEaiRequest& request) const;
			GetPrivateIpOutcome getPrivateIp(const Model::GetPrivateIpRequest &request)const;
			void getPrivateIpAsync(const Model::GetPrivateIpRequest& request, const GetPrivateIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrivateIpOutcomeCallable getPrivateIpCallable(const Model::GetPrivateIpRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EAIS_EAISCLIENT_H_
