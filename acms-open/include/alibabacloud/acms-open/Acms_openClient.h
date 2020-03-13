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

#ifndef ALIBABACLOUD_ACMS_OPEN_ACMS_OPENCLIENT_H_
#define ALIBABACLOUD_ACMS_OPEN_ACMS_OPENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "Acms_openExport.h"
#include "model/CreateConfigurationRequest.h"
#include "model/CreateConfigurationResult.h"
#include "model/CreateNamespaceRequest.h"
#include "model/CreateNamespaceResult.h"
#include "model/DeleteConfigurationRequest.h"
#include "model/DeleteConfigurationResult.h"
#include "model/DeleteNamespaceRequest.h"
#include "model/DeleteNamespaceResult.h"
#include "model/DeployConfigurationRequest.h"
#include "model/DeployConfigurationResult.h"
#include "model/DescribeConfigurationRequest.h"
#include "model/DescribeConfigurationResult.h"
#include "model/DescribeNamespaceRequest.h"
#include "model/DescribeNamespaceResult.h"
#include "model/UpdateNamespaceRequest.h"
#include "model/UpdateNamespaceResult.h"


namespace AlibabaCloud
{
	namespace Acms_open
	{
		class ALIBABACLOUD_ACMS_OPEN_EXPORT Acms_openClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateConfigurationResult> CreateConfigurationOutcome;
			typedef std::future<CreateConfigurationOutcome> CreateConfigurationOutcomeCallable;
			typedef std::function<void(const Acms_openClient*, const Model::CreateConfigurationRequest&, const CreateConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigurationAsyncHandler;
			typedef Outcome<Error, Model::CreateNamespaceResult> CreateNamespaceOutcome;
			typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
			typedef std::function<void(const Acms_openClient*, const Model::CreateNamespaceRequest&, const CreateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteConfigurationResult> DeleteConfigurationOutcome;
			typedef std::future<DeleteConfigurationOutcome> DeleteConfigurationOutcomeCallable;
			typedef std::function<void(const Acms_openClient*, const Model::DeleteConfigurationRequest&, const DeleteConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DeleteNamespaceResult> DeleteNamespaceOutcome;
			typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
			typedef std::function<void(const Acms_openClient*, const Model::DeleteNamespaceRequest&, const DeleteNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeployConfigurationResult> DeployConfigurationOutcome;
			typedef std::future<DeployConfigurationOutcome> DeployConfigurationOutcomeCallable;
			typedef std::function<void(const Acms_openClient*, const Model::DeployConfigurationRequest&, const DeployConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigurationResult> DescribeConfigurationOutcome;
			typedef std::future<DescribeConfigurationOutcome> DescribeConfigurationOutcomeCallable;
			typedef std::function<void(const Acms_openClient*, const Model::DescribeConfigurationRequest&, const DescribeConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeNamespaceResult> DescribeNamespaceOutcome;
			typedef std::future<DescribeNamespaceOutcome> DescribeNamespaceOutcomeCallable;
			typedef std::function<void(const Acms_openClient*, const Model::DescribeNamespaceRequest&, const DescribeNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateNamespaceResult> UpdateNamespaceOutcome;
			typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
			typedef std::function<void(const Acms_openClient*, const Model::UpdateNamespaceRequest&, const UpdateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceAsyncHandler;

			Acms_openClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Acms_openClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Acms_openClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Acms_openClient();
			CreateConfigurationOutcome createConfiguration(const Model::CreateConfigurationRequest &request)const;
			void createConfigurationAsync(const Model::CreateConfigurationRequest& request, const CreateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConfigurationOutcomeCallable createConfigurationCallable(const Model::CreateConfigurationRequest& request) const;
			CreateNamespaceOutcome createNamespace(const Model::CreateNamespaceRequest &request)const;
			void createNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNamespaceOutcomeCallable createNamespaceCallable(const Model::CreateNamespaceRequest& request) const;
			DeleteConfigurationOutcome deleteConfiguration(const Model::DeleteConfigurationRequest &request)const;
			void deleteConfigurationAsync(const Model::DeleteConfigurationRequest& request, const DeleteConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConfigurationOutcomeCallable deleteConfigurationCallable(const Model::DeleteConfigurationRequest& request) const;
			DeleteNamespaceOutcome deleteNamespace(const Model::DeleteNamespaceRequest &request)const;
			void deleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNamespaceOutcomeCallable deleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;
			DeployConfigurationOutcome deployConfiguration(const Model::DeployConfigurationRequest &request)const;
			void deployConfigurationAsync(const Model::DeployConfigurationRequest& request, const DeployConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployConfigurationOutcomeCallable deployConfigurationCallable(const Model::DeployConfigurationRequest& request) const;
			DescribeConfigurationOutcome describeConfiguration(const Model::DescribeConfigurationRequest &request)const;
			void describeConfigurationAsync(const Model::DescribeConfigurationRequest& request, const DescribeConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigurationOutcomeCallable describeConfigurationCallable(const Model::DescribeConfigurationRequest& request) const;
			DescribeNamespaceOutcome describeNamespace(const Model::DescribeNamespaceRequest &request)const;
			void describeNamespaceAsync(const Model::DescribeNamespaceRequest& request, const DescribeNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNamespaceOutcomeCallable describeNamespaceCallable(const Model::DescribeNamespaceRequest& request) const;
			UpdateNamespaceOutcome updateNamespace(const Model::UpdateNamespaceRequest &request)const;
			void updateNamespaceAsync(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNamespaceOutcomeCallable updateNamespaceCallable(const Model::UpdateNamespaceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ACMS_OPEN_ACMS_OPENCLIENT_H_
