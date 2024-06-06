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

#ifndef ALIBABACLOUD_IDAAS_DORAEMON_IDAAS_DORAEMONCLIENT_H_
#define ALIBABACLOUD_IDAAS_DORAEMON_IDAAS_DORAEMONCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Idaas_doraemonExport.h"
#include "model/CreateAuthenticatorRegistrationRequest.h"
#include "model/CreateAuthenticatorRegistrationResult.h"
#include "model/CreateUserAuthenticateOptionsRequest.h"
#include "model/CreateUserAuthenticateOptionsResult.h"
#include "model/DeregisterAuthenticatorRequest.h"
#include "model/DeregisterAuthenticatorResult.h"
#include "model/FetchAccessTokenRequest.h"
#include "model/FetchAccessTokenResult.h"
#include "model/GetAuthenticatorRequest.h"
#include "model/GetAuthenticatorResult.h"
#include "model/ListAuthenticationLogsRequest.h"
#include "model/ListAuthenticationLogsResult.h"
#include "model/ListAuthenticatorOpsLogsRequest.h"
#include "model/ListAuthenticatorOpsLogsResult.h"
#include "model/ListAuthenticatorsRequest.h"
#include "model/ListAuthenticatorsResult.h"
#include "model/ListCostUnitOrdersRequest.h"
#include "model/ListCostUnitOrdersResult.h"
#include "model/ListOrderConsumeStatisticRecordsRequest.h"
#include "model/ListOrderConsumeStatisticRecordsResult.h"
#include "model/ListPwnedPasswordsRequest.h"
#include "model/ListPwnedPasswordsResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/QuerySmsReportsRequest.h"
#include "model/QuerySmsReportsResult.h"
#include "model/QuerySmsUpsRequest.h"
#include "model/QuerySmsUpsResult.h"
#include "model/RegisterAuthenticatorRequest.h"
#include "model/RegisterAuthenticatorResult.h"
#include "model/ServiceInvokeRequest.h"
#include "model/ServiceInvokeResult.h"
#include "model/UpdateAuthenticatorAttributeRequest.h"
#include "model/UpdateAuthenticatorAttributeResult.h"
#include "model/VerifyIdTokenRequest.h"
#include "model/VerifyIdTokenResult.h"
#include "model/VerifyUserAuthenticationRequest.h"
#include "model/VerifyUserAuthenticationResult.h"


namespace AlibabaCloud
{
	namespace Idaas_doraemon
	{
		class ALIBABACLOUD_IDAAS_DORAEMON_EXPORT Idaas_doraemonClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAuthenticatorRegistrationResult> CreateAuthenticatorRegistrationOutcome;
			typedef std::future<CreateAuthenticatorRegistrationOutcome> CreateAuthenticatorRegistrationOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::CreateAuthenticatorRegistrationRequest&, const CreateAuthenticatorRegistrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthenticatorRegistrationAsyncHandler;
			typedef Outcome<Error, Model::CreateUserAuthenticateOptionsResult> CreateUserAuthenticateOptionsOutcome;
			typedef std::future<CreateUserAuthenticateOptionsOutcome> CreateUserAuthenticateOptionsOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::CreateUserAuthenticateOptionsRequest&, const CreateUserAuthenticateOptionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAuthenticateOptionsAsyncHandler;
			typedef Outcome<Error, Model::DeregisterAuthenticatorResult> DeregisterAuthenticatorOutcome;
			typedef std::future<DeregisterAuthenticatorOutcome> DeregisterAuthenticatorOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::DeregisterAuthenticatorRequest&, const DeregisterAuthenticatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterAuthenticatorAsyncHandler;
			typedef Outcome<Error, Model::FetchAccessTokenResult> FetchAccessTokenOutcome;
			typedef std::future<FetchAccessTokenOutcome> FetchAccessTokenOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::FetchAccessTokenRequest&, const FetchAccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FetchAccessTokenAsyncHandler;
			typedef Outcome<Error, Model::GetAuthenticatorResult> GetAuthenticatorOutcome;
			typedef std::future<GetAuthenticatorOutcome> GetAuthenticatorOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::GetAuthenticatorRequest&, const GetAuthenticatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthenticatorAsyncHandler;
			typedef Outcome<Error, Model::ListAuthenticationLogsResult> ListAuthenticationLogsOutcome;
			typedef std::future<ListAuthenticationLogsOutcome> ListAuthenticationLogsOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::ListAuthenticationLogsRequest&, const ListAuthenticationLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthenticationLogsAsyncHandler;
			typedef Outcome<Error, Model::ListAuthenticatorOpsLogsResult> ListAuthenticatorOpsLogsOutcome;
			typedef std::future<ListAuthenticatorOpsLogsOutcome> ListAuthenticatorOpsLogsOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::ListAuthenticatorOpsLogsRequest&, const ListAuthenticatorOpsLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthenticatorOpsLogsAsyncHandler;
			typedef Outcome<Error, Model::ListAuthenticatorsResult> ListAuthenticatorsOutcome;
			typedef std::future<ListAuthenticatorsOutcome> ListAuthenticatorsOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::ListAuthenticatorsRequest&, const ListAuthenticatorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthenticatorsAsyncHandler;
			typedef Outcome<Error, Model::ListCostUnitOrdersResult> ListCostUnitOrdersOutcome;
			typedef std::future<ListCostUnitOrdersOutcome> ListCostUnitOrdersOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::ListCostUnitOrdersRequest&, const ListCostUnitOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCostUnitOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListOrderConsumeStatisticRecordsResult> ListOrderConsumeStatisticRecordsOutcome;
			typedef std::future<ListOrderConsumeStatisticRecordsOutcome> ListOrderConsumeStatisticRecordsOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::ListOrderConsumeStatisticRecordsRequest&, const ListOrderConsumeStatisticRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrderConsumeStatisticRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListPwnedPasswordsResult> ListPwnedPasswordsOutcome;
			typedef std::future<ListPwnedPasswordsOutcome> ListPwnedPasswordsOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::ListPwnedPasswordsRequest&, const ListPwnedPasswordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPwnedPasswordsAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::QuerySmsReportsResult> QuerySmsReportsOutcome;
			typedef std::future<QuerySmsReportsOutcome> QuerySmsReportsOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::QuerySmsReportsRequest&, const QuerySmsReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmsReportsAsyncHandler;
			typedef Outcome<Error, Model::QuerySmsUpsResult> QuerySmsUpsOutcome;
			typedef std::future<QuerySmsUpsOutcome> QuerySmsUpsOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::QuerySmsUpsRequest&, const QuerySmsUpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmsUpsAsyncHandler;
			typedef Outcome<Error, Model::RegisterAuthenticatorResult> RegisterAuthenticatorOutcome;
			typedef std::future<RegisterAuthenticatorOutcome> RegisterAuthenticatorOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::RegisterAuthenticatorRequest&, const RegisterAuthenticatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterAuthenticatorAsyncHandler;
			typedef Outcome<Error, Model::ServiceInvokeResult> ServiceInvokeOutcome;
			typedef std::future<ServiceInvokeOutcome> ServiceInvokeOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::ServiceInvokeRequest&, const ServiceInvokeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ServiceInvokeAsyncHandler;
			typedef Outcome<Error, Model::UpdateAuthenticatorAttributeResult> UpdateAuthenticatorAttributeOutcome;
			typedef std::future<UpdateAuthenticatorAttributeOutcome> UpdateAuthenticatorAttributeOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::UpdateAuthenticatorAttributeRequest&, const UpdateAuthenticatorAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuthenticatorAttributeAsyncHandler;
			typedef Outcome<Error, Model::VerifyIdTokenResult> VerifyIdTokenOutcome;
			typedef std::future<VerifyIdTokenOutcome> VerifyIdTokenOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::VerifyIdTokenRequest&, const VerifyIdTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyIdTokenAsyncHandler;
			typedef Outcome<Error, Model::VerifyUserAuthenticationResult> VerifyUserAuthenticationOutcome;
			typedef std::future<VerifyUserAuthenticationOutcome> VerifyUserAuthenticationOutcomeCallable;
			typedef std::function<void(const Idaas_doraemonClient*, const Model::VerifyUserAuthenticationRequest&, const VerifyUserAuthenticationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyUserAuthenticationAsyncHandler;

			Idaas_doraemonClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Idaas_doraemonClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Idaas_doraemonClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Idaas_doraemonClient();
			CreateAuthenticatorRegistrationOutcome createAuthenticatorRegistration(const Model::CreateAuthenticatorRegistrationRequest &request)const;
			void createAuthenticatorRegistrationAsync(const Model::CreateAuthenticatorRegistrationRequest& request, const CreateAuthenticatorRegistrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuthenticatorRegistrationOutcomeCallable createAuthenticatorRegistrationCallable(const Model::CreateAuthenticatorRegistrationRequest& request) const;
			CreateUserAuthenticateOptionsOutcome createUserAuthenticateOptions(const Model::CreateUserAuthenticateOptionsRequest &request)const;
			void createUserAuthenticateOptionsAsync(const Model::CreateUserAuthenticateOptionsRequest& request, const CreateUserAuthenticateOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserAuthenticateOptionsOutcomeCallable createUserAuthenticateOptionsCallable(const Model::CreateUserAuthenticateOptionsRequest& request) const;
			DeregisterAuthenticatorOutcome deregisterAuthenticator(const Model::DeregisterAuthenticatorRequest &request)const;
			void deregisterAuthenticatorAsync(const Model::DeregisterAuthenticatorRequest& request, const DeregisterAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeregisterAuthenticatorOutcomeCallable deregisterAuthenticatorCallable(const Model::DeregisterAuthenticatorRequest& request) const;
			FetchAccessTokenOutcome fetchAccessToken(const Model::FetchAccessTokenRequest &request)const;
			void fetchAccessTokenAsync(const Model::FetchAccessTokenRequest& request, const FetchAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FetchAccessTokenOutcomeCallable fetchAccessTokenCallable(const Model::FetchAccessTokenRequest& request) const;
			GetAuthenticatorOutcome getAuthenticator(const Model::GetAuthenticatorRequest &request)const;
			void getAuthenticatorAsync(const Model::GetAuthenticatorRequest& request, const GetAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuthenticatorOutcomeCallable getAuthenticatorCallable(const Model::GetAuthenticatorRequest& request) const;
			ListAuthenticationLogsOutcome listAuthenticationLogs(const Model::ListAuthenticationLogsRequest &request)const;
			void listAuthenticationLogsAsync(const Model::ListAuthenticationLogsRequest& request, const ListAuthenticationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAuthenticationLogsOutcomeCallable listAuthenticationLogsCallable(const Model::ListAuthenticationLogsRequest& request) const;
			ListAuthenticatorOpsLogsOutcome listAuthenticatorOpsLogs(const Model::ListAuthenticatorOpsLogsRequest &request)const;
			void listAuthenticatorOpsLogsAsync(const Model::ListAuthenticatorOpsLogsRequest& request, const ListAuthenticatorOpsLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAuthenticatorOpsLogsOutcomeCallable listAuthenticatorOpsLogsCallable(const Model::ListAuthenticatorOpsLogsRequest& request) const;
			ListAuthenticatorsOutcome listAuthenticators(const Model::ListAuthenticatorsRequest &request)const;
			void listAuthenticatorsAsync(const Model::ListAuthenticatorsRequest& request, const ListAuthenticatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAuthenticatorsOutcomeCallable listAuthenticatorsCallable(const Model::ListAuthenticatorsRequest& request) const;
			ListCostUnitOrdersOutcome listCostUnitOrders(const Model::ListCostUnitOrdersRequest &request)const;
			void listCostUnitOrdersAsync(const Model::ListCostUnitOrdersRequest& request, const ListCostUnitOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCostUnitOrdersOutcomeCallable listCostUnitOrdersCallable(const Model::ListCostUnitOrdersRequest& request) const;
			ListOrderConsumeStatisticRecordsOutcome listOrderConsumeStatisticRecords(const Model::ListOrderConsumeStatisticRecordsRequest &request)const;
			void listOrderConsumeStatisticRecordsAsync(const Model::ListOrderConsumeStatisticRecordsRequest& request, const ListOrderConsumeStatisticRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrderConsumeStatisticRecordsOutcomeCallable listOrderConsumeStatisticRecordsCallable(const Model::ListOrderConsumeStatisticRecordsRequest& request) const;
			ListPwnedPasswordsOutcome listPwnedPasswords(const Model::ListPwnedPasswordsRequest &request)const;
			void listPwnedPasswordsAsync(const Model::ListPwnedPasswordsRequest& request, const ListPwnedPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPwnedPasswordsOutcomeCallable listPwnedPasswordsCallable(const Model::ListPwnedPasswordsRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			QuerySmsReportsOutcome querySmsReports(const Model::QuerySmsReportsRequest &request)const;
			void querySmsReportsAsync(const Model::QuerySmsReportsRequest& request, const QuerySmsReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmsReportsOutcomeCallable querySmsReportsCallable(const Model::QuerySmsReportsRequest& request) const;
			QuerySmsUpsOutcome querySmsUps(const Model::QuerySmsUpsRequest &request)const;
			void querySmsUpsAsync(const Model::QuerySmsUpsRequest& request, const QuerySmsUpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmsUpsOutcomeCallable querySmsUpsCallable(const Model::QuerySmsUpsRequest& request) const;
			RegisterAuthenticatorOutcome registerAuthenticator(const Model::RegisterAuthenticatorRequest &request)const;
			void registerAuthenticatorAsync(const Model::RegisterAuthenticatorRequest& request, const RegisterAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterAuthenticatorOutcomeCallable registerAuthenticatorCallable(const Model::RegisterAuthenticatorRequest& request) const;
			ServiceInvokeOutcome serviceInvoke(const Model::ServiceInvokeRequest &request)const;
			void serviceInvokeAsync(const Model::ServiceInvokeRequest& request, const ServiceInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ServiceInvokeOutcomeCallable serviceInvokeCallable(const Model::ServiceInvokeRequest& request) const;
			UpdateAuthenticatorAttributeOutcome updateAuthenticatorAttribute(const Model::UpdateAuthenticatorAttributeRequest &request)const;
			void updateAuthenticatorAttributeAsync(const Model::UpdateAuthenticatorAttributeRequest& request, const UpdateAuthenticatorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAuthenticatorAttributeOutcomeCallable updateAuthenticatorAttributeCallable(const Model::UpdateAuthenticatorAttributeRequest& request) const;
			VerifyIdTokenOutcome verifyIdToken(const Model::VerifyIdTokenRequest &request)const;
			void verifyIdTokenAsync(const Model::VerifyIdTokenRequest& request, const VerifyIdTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyIdTokenOutcomeCallable verifyIdTokenCallable(const Model::VerifyIdTokenRequest& request) const;
			VerifyUserAuthenticationOutcome verifyUserAuthentication(const Model::VerifyUserAuthenticationRequest &request)const;
			void verifyUserAuthenticationAsync(const Model::VerifyUserAuthenticationRequest& request, const VerifyUserAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyUserAuthenticationOutcomeCallable verifyUserAuthenticationCallable(const Model::VerifyUserAuthenticationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IDAAS_DORAEMON_IDAAS_DORAEMONCLIENT_H_
