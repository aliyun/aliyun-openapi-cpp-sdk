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

#ifndef ALIBABACLOUD_EIPANYCAST_EIPANYCASTCLIENT_H_
#define ALIBABACLOUD_EIPANYCAST_EIPANYCASTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EipanycastExport.h"
#include "model/AllocateAnycastEipAddressRequest.h"
#include "model/AllocateAnycastEipAddressResult.h"
#include "model/AssociateAnycastEipAddressRequest.h"
#include "model/AssociateAnycastEipAddressResult.h"
#include "model/DescribeAnycastEipAddressRequest.h"
#include "model/DescribeAnycastEipAddressResult.h"
#include "model/DescribeAnycastPopLocationsRequest.h"
#include "model/DescribeAnycastPopLocationsResult.h"
#include "model/DescribeAnycastServerRegionsRequest.h"
#include "model/DescribeAnycastServerRegionsResult.h"
#include "model/ListAnycastEipAddressesRequest.h"
#include "model/ListAnycastEipAddressesResult.h"
#include "model/ModifyAnycastEipAddressAttributeRequest.h"
#include "model/ModifyAnycastEipAddressAttributeResult.h"
#include "model/ModifyAnycastEipAddressSpecRequest.h"
#include "model/ModifyAnycastEipAddressSpecResult.h"
#include "model/ReleaseAnycastEipAddressRequest.h"
#include "model/ReleaseAnycastEipAddressResult.h"
#include "model/UnassociateAnycastEipAddressRequest.h"
#include "model/UnassociateAnycastEipAddressResult.h"
#include "model/UpdateAnycastEipAddressAssociationsRequest.h"
#include "model/UpdateAnycastEipAddressAssociationsResult.h"


namespace AlibabaCloud
{
	namespace Eipanycast
	{
		class ALIBABACLOUD_EIPANYCAST_EXPORT EipanycastClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateAnycastEipAddressResult> AllocateAnycastEipAddressOutcome;
			typedef std::future<AllocateAnycastEipAddressOutcome> AllocateAnycastEipAddressOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::AllocateAnycastEipAddressRequest&, const AllocateAnycastEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateAnycastEipAddressAsyncHandler;
			typedef Outcome<Error, Model::AssociateAnycastEipAddressResult> AssociateAnycastEipAddressOutcome;
			typedef std::future<AssociateAnycastEipAddressOutcome> AssociateAnycastEipAddressOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::AssociateAnycastEipAddressRequest&, const AssociateAnycastEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAnycastEipAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnycastEipAddressResult> DescribeAnycastEipAddressOutcome;
			typedef std::future<DescribeAnycastEipAddressOutcome> DescribeAnycastEipAddressOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::DescribeAnycastEipAddressRequest&, const DescribeAnycastEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnycastEipAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnycastPopLocationsResult> DescribeAnycastPopLocationsOutcome;
			typedef std::future<DescribeAnycastPopLocationsOutcome> DescribeAnycastPopLocationsOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::DescribeAnycastPopLocationsRequest&, const DescribeAnycastPopLocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnycastPopLocationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnycastServerRegionsResult> DescribeAnycastServerRegionsOutcome;
			typedef std::future<DescribeAnycastServerRegionsOutcome> DescribeAnycastServerRegionsOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::DescribeAnycastServerRegionsRequest&, const DescribeAnycastServerRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnycastServerRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListAnycastEipAddressesResult> ListAnycastEipAddressesOutcome;
			typedef std::future<ListAnycastEipAddressesOutcome> ListAnycastEipAddressesOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::ListAnycastEipAddressesRequest&, const ListAnycastEipAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAnycastEipAddressesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAnycastEipAddressAttributeResult> ModifyAnycastEipAddressAttributeOutcome;
			typedef std::future<ModifyAnycastEipAddressAttributeOutcome> ModifyAnycastEipAddressAttributeOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::ModifyAnycastEipAddressAttributeRequest&, const ModifyAnycastEipAddressAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnycastEipAddressAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyAnycastEipAddressSpecResult> ModifyAnycastEipAddressSpecOutcome;
			typedef std::future<ModifyAnycastEipAddressSpecOutcome> ModifyAnycastEipAddressSpecOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::ModifyAnycastEipAddressSpecRequest&, const ModifyAnycastEipAddressSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAnycastEipAddressSpecAsyncHandler;
			typedef Outcome<Error, Model::ReleaseAnycastEipAddressResult> ReleaseAnycastEipAddressOutcome;
			typedef std::future<ReleaseAnycastEipAddressOutcome> ReleaseAnycastEipAddressOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::ReleaseAnycastEipAddressRequest&, const ReleaseAnycastEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseAnycastEipAddressAsyncHandler;
			typedef Outcome<Error, Model::UnassociateAnycastEipAddressResult> UnassociateAnycastEipAddressOutcome;
			typedef std::future<UnassociateAnycastEipAddressOutcome> UnassociateAnycastEipAddressOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::UnassociateAnycastEipAddressRequest&, const UnassociateAnycastEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateAnycastEipAddressAsyncHandler;
			typedef Outcome<Error, Model::UpdateAnycastEipAddressAssociationsResult> UpdateAnycastEipAddressAssociationsOutcome;
			typedef std::future<UpdateAnycastEipAddressAssociationsOutcome> UpdateAnycastEipAddressAssociationsOutcomeCallable;
			typedef std::function<void(const EipanycastClient*, const Model::UpdateAnycastEipAddressAssociationsRequest&, const UpdateAnycastEipAddressAssociationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAnycastEipAddressAssociationsAsyncHandler;

			EipanycastClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EipanycastClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EipanycastClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EipanycastClient();
			AllocateAnycastEipAddressOutcome allocateAnycastEipAddress(const Model::AllocateAnycastEipAddressRequest &request)const;
			void allocateAnycastEipAddressAsync(const Model::AllocateAnycastEipAddressRequest& request, const AllocateAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateAnycastEipAddressOutcomeCallable allocateAnycastEipAddressCallable(const Model::AllocateAnycastEipAddressRequest& request) const;
			AssociateAnycastEipAddressOutcome associateAnycastEipAddress(const Model::AssociateAnycastEipAddressRequest &request)const;
			void associateAnycastEipAddressAsync(const Model::AssociateAnycastEipAddressRequest& request, const AssociateAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateAnycastEipAddressOutcomeCallable associateAnycastEipAddressCallable(const Model::AssociateAnycastEipAddressRequest& request) const;
			DescribeAnycastEipAddressOutcome describeAnycastEipAddress(const Model::DescribeAnycastEipAddressRequest &request)const;
			void describeAnycastEipAddressAsync(const Model::DescribeAnycastEipAddressRequest& request, const DescribeAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnycastEipAddressOutcomeCallable describeAnycastEipAddressCallable(const Model::DescribeAnycastEipAddressRequest& request) const;
			DescribeAnycastPopLocationsOutcome describeAnycastPopLocations(const Model::DescribeAnycastPopLocationsRequest &request)const;
			void describeAnycastPopLocationsAsync(const Model::DescribeAnycastPopLocationsRequest& request, const DescribeAnycastPopLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnycastPopLocationsOutcomeCallable describeAnycastPopLocationsCallable(const Model::DescribeAnycastPopLocationsRequest& request) const;
			DescribeAnycastServerRegionsOutcome describeAnycastServerRegions(const Model::DescribeAnycastServerRegionsRequest &request)const;
			void describeAnycastServerRegionsAsync(const Model::DescribeAnycastServerRegionsRequest& request, const DescribeAnycastServerRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnycastServerRegionsOutcomeCallable describeAnycastServerRegionsCallable(const Model::DescribeAnycastServerRegionsRequest& request) const;
			ListAnycastEipAddressesOutcome listAnycastEipAddresses(const Model::ListAnycastEipAddressesRequest &request)const;
			void listAnycastEipAddressesAsync(const Model::ListAnycastEipAddressesRequest& request, const ListAnycastEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAnycastEipAddressesOutcomeCallable listAnycastEipAddressesCallable(const Model::ListAnycastEipAddressesRequest& request) const;
			ModifyAnycastEipAddressAttributeOutcome modifyAnycastEipAddressAttribute(const Model::ModifyAnycastEipAddressAttributeRequest &request)const;
			void modifyAnycastEipAddressAttributeAsync(const Model::ModifyAnycastEipAddressAttributeRequest& request, const ModifyAnycastEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAnycastEipAddressAttributeOutcomeCallable modifyAnycastEipAddressAttributeCallable(const Model::ModifyAnycastEipAddressAttributeRequest& request) const;
			ModifyAnycastEipAddressSpecOutcome modifyAnycastEipAddressSpec(const Model::ModifyAnycastEipAddressSpecRequest &request)const;
			void modifyAnycastEipAddressSpecAsync(const Model::ModifyAnycastEipAddressSpecRequest& request, const ModifyAnycastEipAddressSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAnycastEipAddressSpecOutcomeCallable modifyAnycastEipAddressSpecCallable(const Model::ModifyAnycastEipAddressSpecRequest& request) const;
			ReleaseAnycastEipAddressOutcome releaseAnycastEipAddress(const Model::ReleaseAnycastEipAddressRequest &request)const;
			void releaseAnycastEipAddressAsync(const Model::ReleaseAnycastEipAddressRequest& request, const ReleaseAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseAnycastEipAddressOutcomeCallable releaseAnycastEipAddressCallable(const Model::ReleaseAnycastEipAddressRequest& request) const;
			UnassociateAnycastEipAddressOutcome unassociateAnycastEipAddress(const Model::UnassociateAnycastEipAddressRequest &request)const;
			void unassociateAnycastEipAddressAsync(const Model::UnassociateAnycastEipAddressRequest& request, const UnassociateAnycastEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateAnycastEipAddressOutcomeCallable unassociateAnycastEipAddressCallable(const Model::UnassociateAnycastEipAddressRequest& request) const;
			UpdateAnycastEipAddressAssociationsOutcome updateAnycastEipAddressAssociations(const Model::UpdateAnycastEipAddressAssociationsRequest &request)const;
			void updateAnycastEipAddressAssociationsAsync(const Model::UpdateAnycastEipAddressAssociationsRequest& request, const UpdateAnycastEipAddressAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAnycastEipAddressAssociationsOutcomeCallable updateAnycastEipAddressAssociationsCallable(const Model::UpdateAnycastEipAddressAssociationsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EIPANYCAST_EIPANYCASTCLIENT_H_
