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

#ifndef ALIBABACLOUD_SLB_SLBCLIENT_H_
#define ALIBABACLOUD_SLB_SLBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SlbExport.h"
#include "model/AddBackendServersRequest.h"
#include "model/AddBackendServersResult.h"
#include "model/CreateLoadBalancerRequest.h"
#include "model/CreateLoadBalancerResult.h"
#include "model/CreateLoadBalancerHTTPListenerRequest.h"
#include "model/CreateLoadBalancerHTTPListenerResult.h"
#include "model/CreateLoadBalancerTCPListenerRequest.h"
#include "model/CreateLoadBalancerTCPListenerResult.h"
#include "model/DeleteLoadBalancerRequest.h"
#include "model/DeleteLoadBalancerResult.h"
#include "model/DeleteLoadBalancerListenerRequest.h"
#include "model/DeleteLoadBalancerListenerResult.h"
#include "model/DescribeBackendServersRequest.h"
#include "model/DescribeBackendServersResult.h"
#include "model/DescribeLoadBalancerAttributeRequest.h"
#include "model/DescribeLoadBalancerAttributeResult.h"
#include "model/DescribeLoadBalancerHTTPListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerHTTPListenerAttributeResult.h"
#include "model/DescribeLoadBalancerTCPListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerTCPListenerAttributeResult.h"
#include "model/DescribeLoadBalancersRequest.h"
#include "model/DescribeLoadBalancersResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/RemoveBackendServersRequest.h"
#include "model/RemoveBackendServersResult.h"
#include "model/SetLoadBalancerHTTPListenerAttributeRequest.h"
#include "model/SetLoadBalancerHTTPListenerAttributeResult.h"
#include "model/SetLoadBalancerListenerStatusRequest.h"
#include "model/SetLoadBalancerListenerStatusResult.h"
#include "model/SetLoadBalancerNameRequest.h"
#include "model/SetLoadBalancerNameResult.h"
#include "model/SetLoadBalancerStatusRequest.h"
#include "model/SetLoadBalancerStatusResult.h"
#include "model/SetLoadBalancerTCPListenerAttributeRequest.h"
#include "model/SetLoadBalancerTCPListenerAttributeResult.h"


namespace AlibabaCloud
{
	namespace Slb
	{
		class ALIBABACLOUD_SLB_EXPORT SlbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddBackendServersResult> AddBackendServersOutcome;
			typedef std::future<AddBackendServersOutcome> AddBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::AddBackendServersRequest&, const AddBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBackendServersAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerResult> CreateLoadBalancerOutcome;
			typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateLoadBalancerRequest&, const CreateLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerHTTPListenerResult> CreateLoadBalancerHTTPListenerOutcome;
			typedef std::future<CreateLoadBalancerHTTPListenerOutcome> CreateLoadBalancerHTTPListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateLoadBalancerHTTPListenerRequest&, const CreateLoadBalancerHTTPListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerHTTPListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerTCPListenerResult> CreateLoadBalancerTCPListenerOutcome;
			typedef std::future<CreateLoadBalancerTCPListenerOutcome> CreateLoadBalancerTCPListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateLoadBalancerTCPListenerRequest&, const CreateLoadBalancerTCPListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerTCPListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerResult> DeleteLoadBalancerOutcome;
			typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteLoadBalancerRequest&, const DeleteLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerListenerResult> DeleteLoadBalancerListenerOutcome;
			typedef std::future<DeleteLoadBalancerListenerOutcome> DeleteLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteLoadBalancerListenerRequest&, const DeleteLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackendServersResult> DescribeBackendServersOutcome;
			typedef std::future<DescribeBackendServersOutcome> DescribeBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeBackendServersRequest&, const DescribeBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackendServersAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerAttributeResult> DescribeLoadBalancerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerAttributeOutcome> DescribeLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerAttributeRequest&, const DescribeLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerHTTPListenerAttributeResult> DescribeLoadBalancerHTTPListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerHTTPListenerAttributeOutcome> DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerHTTPListenerAttributeRequest&, const DescribeLoadBalancerHTTPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerHTTPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerTCPListenerAttributeResult> DescribeLoadBalancerTCPListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerTCPListenerAttributeOutcome> DescribeLoadBalancerTCPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerTCPListenerAttributeRequest&, const DescribeLoadBalancerTCPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerTCPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancersResult> DescribeLoadBalancersOutcome;
			typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancersRequest&, const DescribeLoadBalancersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::RemoveBackendServersResult> RemoveBackendServersOutcome;
			typedef std::future<RemoveBackendServersOutcome> RemoveBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::RemoveBackendServersRequest&, const RemoveBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBackendServersAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerHTTPListenerAttributeResult> SetLoadBalancerHTTPListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerHTTPListenerAttributeOutcome> SetLoadBalancerHTTPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerHTTPListenerAttributeRequest&, const SetLoadBalancerHTTPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerHTTPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerListenerStatusResult> SetLoadBalancerListenerStatusOutcome;
			typedef std::future<SetLoadBalancerListenerStatusOutcome> SetLoadBalancerListenerStatusOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerListenerStatusRequest&, const SetLoadBalancerListenerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerListenerStatusAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerNameResult> SetLoadBalancerNameOutcome;
			typedef std::future<SetLoadBalancerNameOutcome> SetLoadBalancerNameOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerNameRequest&, const SetLoadBalancerNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerNameAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerStatusResult> SetLoadBalancerStatusOutcome;
			typedef std::future<SetLoadBalancerStatusOutcome> SetLoadBalancerStatusOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerStatusRequest&, const SetLoadBalancerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerStatusAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerTCPListenerAttributeResult> SetLoadBalancerTCPListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerTCPListenerAttributeOutcome> SetLoadBalancerTCPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerTCPListenerAttributeRequest&, const SetLoadBalancerTCPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerTCPListenerAttributeAsyncHandler;

			SlbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SlbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SlbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SlbClient();
			AddBackendServersOutcome addBackendServers(const Model::AddBackendServersRequest &request)const;
			void addBackendServersAsync(const Model::AddBackendServersRequest& request, const AddBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBackendServersOutcomeCallable addBackendServersCallable(const Model::AddBackendServersRequest& request) const;
			CreateLoadBalancerOutcome createLoadBalancer(const Model::CreateLoadBalancerRequest &request)const;
			void createLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerOutcomeCallable createLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;
			CreateLoadBalancerHTTPListenerOutcome createLoadBalancerHTTPListener(const Model::CreateLoadBalancerHTTPListenerRequest &request)const;
			void createLoadBalancerHTTPListenerAsync(const Model::CreateLoadBalancerHTTPListenerRequest& request, const CreateLoadBalancerHTTPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerHTTPListenerOutcomeCallable createLoadBalancerHTTPListenerCallable(const Model::CreateLoadBalancerHTTPListenerRequest& request) const;
			CreateLoadBalancerTCPListenerOutcome createLoadBalancerTCPListener(const Model::CreateLoadBalancerTCPListenerRequest &request)const;
			void createLoadBalancerTCPListenerAsync(const Model::CreateLoadBalancerTCPListenerRequest& request, const CreateLoadBalancerTCPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerTCPListenerOutcomeCallable createLoadBalancerTCPListenerCallable(const Model::CreateLoadBalancerTCPListenerRequest& request) const;
			DeleteLoadBalancerOutcome deleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request)const;
			void deleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerOutcomeCallable deleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;
			DeleteLoadBalancerListenerOutcome deleteLoadBalancerListener(const Model::DeleteLoadBalancerListenerRequest &request)const;
			void deleteLoadBalancerListenerAsync(const Model::DeleteLoadBalancerListenerRequest& request, const DeleteLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerListenerOutcomeCallable deleteLoadBalancerListenerCallable(const Model::DeleteLoadBalancerListenerRequest& request) const;
			DescribeBackendServersOutcome describeBackendServers(const Model::DescribeBackendServersRequest &request)const;
			void describeBackendServersAsync(const Model::DescribeBackendServersRequest& request, const DescribeBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackendServersOutcomeCallable describeBackendServersCallable(const Model::DescribeBackendServersRequest& request) const;
			DescribeLoadBalancerAttributeOutcome describeLoadBalancerAttribute(const Model::DescribeLoadBalancerAttributeRequest &request)const;
			void describeLoadBalancerAttributeAsync(const Model::DescribeLoadBalancerAttributeRequest& request, const DescribeLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerAttributeOutcomeCallable describeLoadBalancerAttributeCallable(const Model::DescribeLoadBalancerAttributeRequest& request) const;
			DescribeLoadBalancerHTTPListenerAttributeOutcome describeLoadBalancerHTTPListenerAttribute(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest &request)const;
			void describeLoadBalancerHTTPListenerAttributeAsync(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest& request, const DescribeLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable describeLoadBalancerHTTPListenerAttributeCallable(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest& request) const;
			DescribeLoadBalancerTCPListenerAttributeOutcome describeLoadBalancerTCPListenerAttribute(const Model::DescribeLoadBalancerTCPListenerAttributeRequest &request)const;
			void describeLoadBalancerTCPListenerAttributeAsync(const Model::DescribeLoadBalancerTCPListenerAttributeRequest& request, const DescribeLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerTCPListenerAttributeOutcomeCallable describeLoadBalancerTCPListenerAttributeCallable(const Model::DescribeLoadBalancerTCPListenerAttributeRequest& request) const;
			DescribeLoadBalancersOutcome describeLoadBalancers(const Model::DescribeLoadBalancersRequest &request)const;
			void describeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancersOutcomeCallable describeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			RemoveBackendServersOutcome removeBackendServers(const Model::RemoveBackendServersRequest &request)const;
			void removeBackendServersAsync(const Model::RemoveBackendServersRequest& request, const RemoveBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveBackendServersOutcomeCallable removeBackendServersCallable(const Model::RemoveBackendServersRequest& request) const;
			SetLoadBalancerHTTPListenerAttributeOutcome setLoadBalancerHTTPListenerAttribute(const Model::SetLoadBalancerHTTPListenerAttributeRequest &request)const;
			void setLoadBalancerHTTPListenerAttributeAsync(const Model::SetLoadBalancerHTTPListenerAttributeRequest& request, const SetLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerHTTPListenerAttributeOutcomeCallable setLoadBalancerHTTPListenerAttributeCallable(const Model::SetLoadBalancerHTTPListenerAttributeRequest& request) const;
			SetLoadBalancerListenerStatusOutcome setLoadBalancerListenerStatus(const Model::SetLoadBalancerListenerStatusRequest &request)const;
			void setLoadBalancerListenerStatusAsync(const Model::SetLoadBalancerListenerStatusRequest& request, const SetLoadBalancerListenerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerListenerStatusOutcomeCallable setLoadBalancerListenerStatusCallable(const Model::SetLoadBalancerListenerStatusRequest& request) const;
			SetLoadBalancerNameOutcome setLoadBalancerName(const Model::SetLoadBalancerNameRequest &request)const;
			void setLoadBalancerNameAsync(const Model::SetLoadBalancerNameRequest& request, const SetLoadBalancerNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerNameOutcomeCallable setLoadBalancerNameCallable(const Model::SetLoadBalancerNameRequest& request) const;
			SetLoadBalancerStatusOutcome setLoadBalancerStatus(const Model::SetLoadBalancerStatusRequest &request)const;
			void setLoadBalancerStatusAsync(const Model::SetLoadBalancerStatusRequest& request, const SetLoadBalancerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerStatusOutcomeCallable setLoadBalancerStatusCallable(const Model::SetLoadBalancerStatusRequest& request) const;
			SetLoadBalancerTCPListenerAttributeOutcome setLoadBalancerTCPListenerAttribute(const Model::SetLoadBalancerTCPListenerAttributeRequest &request)const;
			void setLoadBalancerTCPListenerAttributeAsync(const Model::SetLoadBalancerTCPListenerAttributeRequest& request, const SetLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerTCPListenerAttributeOutcomeCallable setLoadBalancerTCPListenerAttributeCallable(const Model::SetLoadBalancerTCPListenerAttributeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SLB_SLBCLIENT_H_
