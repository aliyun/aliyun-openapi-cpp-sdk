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

#include <alibabacloud/idaas-doraemon/Idaas_doraemonClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

namespace
{
	const std::string SERVICE_NAME = "idaas-doraemon";
}

Idaas_doraemonClient::Idaas_doraemonClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "idaasauth");
}

Idaas_doraemonClient::Idaas_doraemonClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "idaasauth");
}

Idaas_doraemonClient::Idaas_doraemonClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "idaasauth");
}

Idaas_doraemonClient::~Idaas_doraemonClient()
{}

Idaas_doraemonClient::CreateAuthenticatorRegistrationOutcome Idaas_doraemonClient::createAuthenticatorRegistration(const CreateAuthenticatorRegistrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAuthenticatorRegistrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAuthenticatorRegistrationOutcome(CreateAuthenticatorRegistrationResult(outcome.result()));
	else
		return CreateAuthenticatorRegistrationOutcome(outcome.error());
}

void Idaas_doraemonClient::createAuthenticatorRegistrationAsync(const CreateAuthenticatorRegistrationRequest& request, const CreateAuthenticatorRegistrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAuthenticatorRegistration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::CreateAuthenticatorRegistrationOutcomeCallable Idaas_doraemonClient::createAuthenticatorRegistrationCallable(const CreateAuthenticatorRegistrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAuthenticatorRegistrationOutcome()>>(
			[this, request]()
			{
			return this->createAuthenticatorRegistration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::CreateUserAuthenticateOptionsOutcome Idaas_doraemonClient::createUserAuthenticateOptions(const CreateUserAuthenticateOptionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserAuthenticateOptionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserAuthenticateOptionsOutcome(CreateUserAuthenticateOptionsResult(outcome.result()));
	else
		return CreateUserAuthenticateOptionsOutcome(outcome.error());
}

void Idaas_doraemonClient::createUserAuthenticateOptionsAsync(const CreateUserAuthenticateOptionsRequest& request, const CreateUserAuthenticateOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserAuthenticateOptions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::CreateUserAuthenticateOptionsOutcomeCallable Idaas_doraemonClient::createUserAuthenticateOptionsCallable(const CreateUserAuthenticateOptionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserAuthenticateOptionsOutcome()>>(
			[this, request]()
			{
			return this->createUserAuthenticateOptions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::DeregisterAuthenticatorOutcome Idaas_doraemonClient::deregisterAuthenticator(const DeregisterAuthenticatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeregisterAuthenticatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeregisterAuthenticatorOutcome(DeregisterAuthenticatorResult(outcome.result()));
	else
		return DeregisterAuthenticatorOutcome(outcome.error());
}

void Idaas_doraemonClient::deregisterAuthenticatorAsync(const DeregisterAuthenticatorRequest& request, const DeregisterAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deregisterAuthenticator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::DeregisterAuthenticatorOutcomeCallable Idaas_doraemonClient::deregisterAuthenticatorCallable(const DeregisterAuthenticatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeregisterAuthenticatorOutcome()>>(
			[this, request]()
			{
			return this->deregisterAuthenticator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::FetchAccessTokenOutcome Idaas_doraemonClient::fetchAccessToken(const FetchAccessTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FetchAccessTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FetchAccessTokenOutcome(FetchAccessTokenResult(outcome.result()));
	else
		return FetchAccessTokenOutcome(outcome.error());
}

void Idaas_doraemonClient::fetchAccessTokenAsync(const FetchAccessTokenRequest& request, const FetchAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fetchAccessToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::FetchAccessTokenOutcomeCallable Idaas_doraemonClient::fetchAccessTokenCallable(const FetchAccessTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FetchAccessTokenOutcome()>>(
			[this, request]()
			{
			return this->fetchAccessToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::GetAuthenticatorOutcome Idaas_doraemonClient::getAuthenticator(const GetAuthenticatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuthenticatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuthenticatorOutcome(GetAuthenticatorResult(outcome.result()));
	else
		return GetAuthenticatorOutcome(outcome.error());
}

void Idaas_doraemonClient::getAuthenticatorAsync(const GetAuthenticatorRequest& request, const GetAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuthenticator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::GetAuthenticatorOutcomeCallable Idaas_doraemonClient::getAuthenticatorCallable(const GetAuthenticatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuthenticatorOutcome()>>(
			[this, request]()
			{
			return this->getAuthenticator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::ListAuthenticationLogsOutcome Idaas_doraemonClient::listAuthenticationLogs(const ListAuthenticationLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthenticationLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthenticationLogsOutcome(ListAuthenticationLogsResult(outcome.result()));
	else
		return ListAuthenticationLogsOutcome(outcome.error());
}

void Idaas_doraemonClient::listAuthenticationLogsAsync(const ListAuthenticationLogsRequest& request, const ListAuthenticationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthenticationLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::ListAuthenticationLogsOutcomeCallable Idaas_doraemonClient::listAuthenticationLogsCallable(const ListAuthenticationLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthenticationLogsOutcome()>>(
			[this, request]()
			{
			return this->listAuthenticationLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::ListAuthenticatorOpsLogsOutcome Idaas_doraemonClient::listAuthenticatorOpsLogs(const ListAuthenticatorOpsLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthenticatorOpsLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthenticatorOpsLogsOutcome(ListAuthenticatorOpsLogsResult(outcome.result()));
	else
		return ListAuthenticatorOpsLogsOutcome(outcome.error());
}

void Idaas_doraemonClient::listAuthenticatorOpsLogsAsync(const ListAuthenticatorOpsLogsRequest& request, const ListAuthenticatorOpsLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthenticatorOpsLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::ListAuthenticatorOpsLogsOutcomeCallable Idaas_doraemonClient::listAuthenticatorOpsLogsCallable(const ListAuthenticatorOpsLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthenticatorOpsLogsOutcome()>>(
			[this, request]()
			{
			return this->listAuthenticatorOpsLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::ListAuthenticatorsOutcome Idaas_doraemonClient::listAuthenticators(const ListAuthenticatorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAuthenticatorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAuthenticatorsOutcome(ListAuthenticatorsResult(outcome.result()));
	else
		return ListAuthenticatorsOutcome(outcome.error());
}

void Idaas_doraemonClient::listAuthenticatorsAsync(const ListAuthenticatorsRequest& request, const ListAuthenticatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAuthenticators(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::ListAuthenticatorsOutcomeCallable Idaas_doraemonClient::listAuthenticatorsCallable(const ListAuthenticatorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAuthenticatorsOutcome()>>(
			[this, request]()
			{
			return this->listAuthenticators(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::ListCostUnitOrdersOutcome Idaas_doraemonClient::listCostUnitOrders(const ListCostUnitOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCostUnitOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCostUnitOrdersOutcome(ListCostUnitOrdersResult(outcome.result()));
	else
		return ListCostUnitOrdersOutcome(outcome.error());
}

void Idaas_doraemonClient::listCostUnitOrdersAsync(const ListCostUnitOrdersRequest& request, const ListCostUnitOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCostUnitOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::ListCostUnitOrdersOutcomeCallable Idaas_doraemonClient::listCostUnitOrdersCallable(const ListCostUnitOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCostUnitOrdersOutcome()>>(
			[this, request]()
			{
			return this->listCostUnitOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::ListOrderConsumeStatisticRecordsOutcome Idaas_doraemonClient::listOrderConsumeStatisticRecords(const ListOrderConsumeStatisticRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrderConsumeStatisticRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrderConsumeStatisticRecordsOutcome(ListOrderConsumeStatisticRecordsResult(outcome.result()));
	else
		return ListOrderConsumeStatisticRecordsOutcome(outcome.error());
}

void Idaas_doraemonClient::listOrderConsumeStatisticRecordsAsync(const ListOrderConsumeStatisticRecordsRequest& request, const ListOrderConsumeStatisticRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrderConsumeStatisticRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::ListOrderConsumeStatisticRecordsOutcomeCallable Idaas_doraemonClient::listOrderConsumeStatisticRecordsCallable(const ListOrderConsumeStatisticRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrderConsumeStatisticRecordsOutcome()>>(
			[this, request]()
			{
			return this->listOrderConsumeStatisticRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::ListPwnedPasswordsOutcome Idaas_doraemonClient::listPwnedPasswords(const ListPwnedPasswordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPwnedPasswordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPwnedPasswordsOutcome(ListPwnedPasswordsResult(outcome.result()));
	else
		return ListPwnedPasswordsOutcome(outcome.error());
}

void Idaas_doraemonClient::listPwnedPasswordsAsync(const ListPwnedPasswordsRequest& request, const ListPwnedPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPwnedPasswords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::ListPwnedPasswordsOutcomeCallable Idaas_doraemonClient::listPwnedPasswordsCallable(const ListPwnedPasswordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPwnedPasswordsOutcome()>>(
			[this, request]()
			{
			return this->listPwnedPasswords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::ListUsersOutcome Idaas_doraemonClient::listUsers(const ListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOutcome(ListUsersResult(outcome.result()));
	else
		return ListUsersOutcome(outcome.error());
}

void Idaas_doraemonClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::ListUsersOutcomeCallable Idaas_doraemonClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::QuerySmsReportsOutcome Idaas_doraemonClient::querySmsReports(const QuerySmsReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySmsReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySmsReportsOutcome(QuerySmsReportsResult(outcome.result()));
	else
		return QuerySmsReportsOutcome(outcome.error());
}

void Idaas_doraemonClient::querySmsReportsAsync(const QuerySmsReportsRequest& request, const QuerySmsReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySmsReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::QuerySmsReportsOutcomeCallable Idaas_doraemonClient::querySmsReportsCallable(const QuerySmsReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySmsReportsOutcome()>>(
			[this, request]()
			{
			return this->querySmsReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::QuerySmsUpsOutcome Idaas_doraemonClient::querySmsUps(const QuerySmsUpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySmsUpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySmsUpsOutcome(QuerySmsUpsResult(outcome.result()));
	else
		return QuerySmsUpsOutcome(outcome.error());
}

void Idaas_doraemonClient::querySmsUpsAsync(const QuerySmsUpsRequest& request, const QuerySmsUpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySmsUps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::QuerySmsUpsOutcomeCallable Idaas_doraemonClient::querySmsUpsCallable(const QuerySmsUpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySmsUpsOutcome()>>(
			[this, request]()
			{
			return this->querySmsUps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::RegisterAuthenticatorOutcome Idaas_doraemonClient::registerAuthenticator(const RegisterAuthenticatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterAuthenticatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterAuthenticatorOutcome(RegisterAuthenticatorResult(outcome.result()));
	else
		return RegisterAuthenticatorOutcome(outcome.error());
}

void Idaas_doraemonClient::registerAuthenticatorAsync(const RegisterAuthenticatorRequest& request, const RegisterAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerAuthenticator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::RegisterAuthenticatorOutcomeCallable Idaas_doraemonClient::registerAuthenticatorCallable(const RegisterAuthenticatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterAuthenticatorOutcome()>>(
			[this, request]()
			{
			return this->registerAuthenticator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::ServiceInvokeOutcome Idaas_doraemonClient::serviceInvoke(const ServiceInvokeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ServiceInvokeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ServiceInvokeOutcome(ServiceInvokeResult(outcome.result()));
	else
		return ServiceInvokeOutcome(outcome.error());
}

void Idaas_doraemonClient::serviceInvokeAsync(const ServiceInvokeRequest& request, const ServiceInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, serviceInvoke(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::ServiceInvokeOutcomeCallable Idaas_doraemonClient::serviceInvokeCallable(const ServiceInvokeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ServiceInvokeOutcome()>>(
			[this, request]()
			{
			return this->serviceInvoke(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::UpdateAuthenticatorAttributeOutcome Idaas_doraemonClient::updateAuthenticatorAttribute(const UpdateAuthenticatorAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAuthenticatorAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAuthenticatorAttributeOutcome(UpdateAuthenticatorAttributeResult(outcome.result()));
	else
		return UpdateAuthenticatorAttributeOutcome(outcome.error());
}

void Idaas_doraemonClient::updateAuthenticatorAttributeAsync(const UpdateAuthenticatorAttributeRequest& request, const UpdateAuthenticatorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAuthenticatorAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::UpdateAuthenticatorAttributeOutcomeCallable Idaas_doraemonClient::updateAuthenticatorAttributeCallable(const UpdateAuthenticatorAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAuthenticatorAttributeOutcome()>>(
			[this, request]()
			{
			return this->updateAuthenticatorAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::VerifyIdTokenOutcome Idaas_doraemonClient::verifyIdToken(const VerifyIdTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyIdTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyIdTokenOutcome(VerifyIdTokenResult(outcome.result()));
	else
		return VerifyIdTokenOutcome(outcome.error());
}

void Idaas_doraemonClient::verifyIdTokenAsync(const VerifyIdTokenRequest& request, const VerifyIdTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyIdToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::VerifyIdTokenOutcomeCallable Idaas_doraemonClient::verifyIdTokenCallable(const VerifyIdTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyIdTokenOutcome()>>(
			[this, request]()
			{
			return this->verifyIdToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Idaas_doraemonClient::VerifyUserAuthenticationOutcome Idaas_doraemonClient::verifyUserAuthentication(const VerifyUserAuthenticationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyUserAuthenticationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyUserAuthenticationOutcome(VerifyUserAuthenticationResult(outcome.result()));
	else
		return VerifyUserAuthenticationOutcome(outcome.error());
}

void Idaas_doraemonClient::verifyUserAuthenticationAsync(const VerifyUserAuthenticationRequest& request, const VerifyUserAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyUserAuthentication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Idaas_doraemonClient::VerifyUserAuthenticationOutcomeCallable Idaas_doraemonClient::verifyUserAuthenticationCallable(const VerifyUserAuthenticationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyUserAuthenticationOutcome()>>(
			[this, request]()
			{
			return this->verifyUserAuthentication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

