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

#ifndef ALIBABACLOUD_EFLO_EFLOCLIENT_H_
#define ALIBABACLOUD_EFLO_EFLOCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EfloExport.h"
#include "model/CreateSubnetRequest.h"
#include "model/CreateSubnetResult.h"
#include "model/CreateVccRequest.h"
#include "model/CreateVccResult.h"
#include "model/CreateVpdRequest.h"
#include "model/CreateVpdResult.h"
#include "model/DeleteSubnetRequest.h"
#include "model/DeleteSubnetResult.h"
#include "model/DeleteVpdRequest.h"
#include "model/DeleteVpdResult.h"
#include "model/GetSubnetRequest.h"
#include "model/GetSubnetResult.h"
#include "model/GetVccRequest.h"
#include "model/GetVccResult.h"
#include "model/GetVpdRequest.h"
#include "model/GetVpdResult.h"
#include "model/InitializeVccRequest.h"
#include "model/InitializeVccResult.h"
#include "model/ListSubnetsRequest.h"
#include "model/ListSubnetsResult.h"
#include "model/ListVccsRequest.h"
#include "model/ListVccsResult.h"
#include "model/ListVpdsRequest.h"
#include "model/ListVpdsResult.h"
#include "model/UpdateSubnetRequest.h"
#include "model/UpdateSubnetResult.h"
#include "model/UpdateVccRequest.h"
#include "model/UpdateVccResult.h"
#include "model/UpdateVpdRequest.h"
#include "model/UpdateVpdResult.h"


namespace AlibabaCloud
{
	namespace Eflo
	{
		class ALIBABACLOUD_EFLO_EXPORT EfloClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateSubnetResult> CreateSubnetOutcome;
			typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateSubnetRequest&, const CreateSubnetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
			typedef Outcome<Error, Model::CreateVccResult> CreateVccOutcome;
			typedef std::future<CreateVccOutcome> CreateVccOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateVccRequest&, const CreateVccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVccAsyncHandler;
			typedef Outcome<Error, Model::CreateVpdResult> CreateVpdOutcome;
			typedef std::future<CreateVpdOutcome> CreateVpdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateVpdRequest&, const CreateVpdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpdAsyncHandler;
			typedef Outcome<Error, Model::DeleteSubnetResult> DeleteSubnetOutcome;
			typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteSubnetRequest&, const DeleteSubnetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpdResult> DeleteVpdOutcome;
			typedef std::future<DeleteVpdOutcome> DeleteVpdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteVpdRequest&, const DeleteVpdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpdAsyncHandler;
			typedef Outcome<Error, Model::GetSubnetResult> GetSubnetOutcome;
			typedef std::future<GetSubnetOutcome> GetSubnetOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetSubnetRequest&, const GetSubnetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubnetAsyncHandler;
			typedef Outcome<Error, Model::GetVccResult> GetVccOutcome;
			typedef std::future<GetVccOutcome> GetVccOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetVccRequest&, const GetVccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVccAsyncHandler;
			typedef Outcome<Error, Model::GetVpdResult> GetVpdOutcome;
			typedef std::future<GetVpdOutcome> GetVpdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetVpdRequest&, const GetVpdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpdAsyncHandler;
			typedef Outcome<Error, Model::InitializeVccResult> InitializeVccOutcome;
			typedef std::future<InitializeVccOutcome> InitializeVccOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::InitializeVccRequest&, const InitializeVccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeVccAsyncHandler;
			typedef Outcome<Error, Model::ListSubnetsResult> ListSubnetsOutcome;
			typedef std::future<ListSubnetsOutcome> ListSubnetsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListSubnetsRequest&, const ListSubnetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSubnetsAsyncHandler;
			typedef Outcome<Error, Model::ListVccsResult> ListVccsOutcome;
			typedef std::future<ListVccsOutcome> ListVccsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVccsRequest&, const ListVccsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVccsAsyncHandler;
			typedef Outcome<Error, Model::ListVpdsResult> ListVpdsOutcome;
			typedef std::future<ListVpdsOutcome> ListVpdsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVpdsRequest&, const ListVpdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpdsAsyncHandler;
			typedef Outcome<Error, Model::UpdateSubnetResult> UpdateSubnetOutcome;
			typedef std::future<UpdateSubnetOutcome> UpdateSubnetOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateSubnetRequest&, const UpdateSubnetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSubnetAsyncHandler;
			typedef Outcome<Error, Model::UpdateVccResult> UpdateVccOutcome;
			typedef std::future<UpdateVccOutcome> UpdateVccOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateVccRequest&, const UpdateVccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVccAsyncHandler;
			typedef Outcome<Error, Model::UpdateVpdResult> UpdateVpdOutcome;
			typedef std::future<UpdateVpdOutcome> UpdateVpdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateVpdRequest&, const UpdateVpdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVpdAsyncHandler;

			EfloClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EfloClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EfloClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EfloClient();
			CreateSubnetOutcome createSubnet(const Model::CreateSubnetRequest &request)const;
			void createSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubnetOutcomeCallable createSubnetCallable(const Model::CreateSubnetRequest& request) const;
			CreateVccOutcome createVcc(const Model::CreateVccRequest &request)const;
			void createVccAsync(const Model::CreateVccRequest& request, const CreateVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVccOutcomeCallable createVccCallable(const Model::CreateVccRequest& request) const;
			CreateVpdOutcome createVpd(const Model::CreateVpdRequest &request)const;
			void createVpdAsync(const Model::CreateVpdRequest& request, const CreateVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpdOutcomeCallable createVpdCallable(const Model::CreateVpdRequest& request) const;
			DeleteSubnetOutcome deleteSubnet(const Model::DeleteSubnetRequest &request)const;
			void deleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSubnetOutcomeCallable deleteSubnetCallable(const Model::DeleteSubnetRequest& request) const;
			DeleteVpdOutcome deleteVpd(const Model::DeleteVpdRequest &request)const;
			void deleteVpdAsync(const Model::DeleteVpdRequest& request, const DeleteVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpdOutcomeCallable deleteVpdCallable(const Model::DeleteVpdRequest& request) const;
			GetSubnetOutcome getSubnet(const Model::GetSubnetRequest &request)const;
			void getSubnetAsync(const Model::GetSubnetRequest& request, const GetSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubnetOutcomeCallable getSubnetCallable(const Model::GetSubnetRequest& request) const;
			GetVccOutcome getVcc(const Model::GetVccRequest &request)const;
			void getVccAsync(const Model::GetVccRequest& request, const GetVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVccOutcomeCallable getVccCallable(const Model::GetVccRequest& request) const;
			GetVpdOutcome getVpd(const Model::GetVpdRequest &request)const;
			void getVpdAsync(const Model::GetVpdRequest& request, const GetVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpdOutcomeCallable getVpdCallable(const Model::GetVpdRequest& request) const;
			InitializeVccOutcome initializeVcc(const Model::InitializeVccRequest &request)const;
			void initializeVccAsync(const Model::InitializeVccRequest& request, const InitializeVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeVccOutcomeCallable initializeVccCallable(const Model::InitializeVccRequest& request) const;
			ListSubnetsOutcome listSubnets(const Model::ListSubnetsRequest &request)const;
			void listSubnetsAsync(const Model::ListSubnetsRequest& request, const ListSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSubnetsOutcomeCallable listSubnetsCallable(const Model::ListSubnetsRequest& request) const;
			ListVccsOutcome listVccs(const Model::ListVccsRequest &request)const;
			void listVccsAsync(const Model::ListVccsRequest& request, const ListVccsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVccsOutcomeCallable listVccsCallable(const Model::ListVccsRequest& request) const;
			ListVpdsOutcome listVpds(const Model::ListVpdsRequest &request)const;
			void listVpdsAsync(const Model::ListVpdsRequest& request, const ListVpdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpdsOutcomeCallable listVpdsCallable(const Model::ListVpdsRequest& request) const;
			UpdateSubnetOutcome updateSubnet(const Model::UpdateSubnetRequest &request)const;
			void updateSubnetAsync(const Model::UpdateSubnetRequest& request, const UpdateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSubnetOutcomeCallable updateSubnetCallable(const Model::UpdateSubnetRequest& request) const;
			UpdateVccOutcome updateVcc(const Model::UpdateVccRequest &request)const;
			void updateVccAsync(const Model::UpdateVccRequest& request, const UpdateVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVccOutcomeCallable updateVccCallable(const Model::UpdateVccRequest& request) const;
			UpdateVpdOutcome updateVpd(const Model::UpdateVpdRequest &request)const;
			void updateVpdAsync(const Model::UpdateVpdRequest& request, const UpdateVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVpdOutcomeCallable updateVpdCallable(const Model::UpdateVpdRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EFLO_EFLOCLIENT_H_
