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

#include <alibabacloud/lto/LtoClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

namespace
{
	const std::string SERVICE_NAME = "lto";
}

LtoClient::LtoClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LtoClient::LtoClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LtoClient::LtoClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LtoClient::~LtoClient()
{}

LtoClient::AddBaaSAntChainBizChainOutcome LtoClient::addBaaSAntChainBizChain(const AddBaaSAntChainBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBaaSAntChainBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBaaSAntChainBizChainOutcome(AddBaaSAntChainBizChainResult(outcome.result()));
	else
		return AddBaaSAntChainBizChainOutcome(outcome.error());
}

void LtoClient::addBaaSAntChainBizChainAsync(const AddBaaSAntChainBizChainRequest& request, const AddBaaSAntChainBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBaaSAntChainBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AddBaaSAntChainBizChainOutcomeCallable LtoClient::addBaaSAntChainBizChainCallable(const AddBaaSAntChainBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBaaSAntChainBizChainOutcome()>>(
			[this, request]()
			{
			return this->addBaaSAntChainBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AddBaaSFabricBizChainOutcome LtoClient::addBaaSFabricBizChain(const AddBaaSFabricBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBaaSFabricBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBaaSFabricBizChainOutcome(AddBaaSFabricBizChainResult(outcome.result()));
	else
		return AddBaaSFabricBizChainOutcome(outcome.error());
}

void LtoClient::addBaaSFabricBizChainAsync(const AddBaaSFabricBizChainRequest& request, const AddBaaSFabricBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBaaSFabricBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AddBaaSFabricBizChainOutcomeCallable LtoClient::addBaaSFabricBizChainCallable(const AddBaaSFabricBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBaaSFabricBizChainOutcome()>>(
			[this, request]()
			{
			return this->addBaaSFabricBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AddBsnFabricBizChainOutcome LtoClient::addBsnFabricBizChain(const AddBsnFabricBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBsnFabricBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBsnFabricBizChainOutcome(AddBsnFabricBizChainResult(outcome.result()));
	else
		return AddBsnFabricBizChainOutcome(outcome.error());
}

void LtoClient::addBsnFabricBizChainAsync(const AddBsnFabricBizChainRequest& request, const AddBsnFabricBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBsnFabricBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AddBsnFabricBizChainOutcomeCallable LtoClient::addBsnFabricBizChainCallable(const AddBsnFabricBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBsnFabricBizChainOutcome()>>(
			[this, request]()
			{
			return this->addBsnFabricBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AddDeviceGroupOutcome LtoClient::addDeviceGroup(const AddDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDeviceGroupOutcome(AddDeviceGroupResult(outcome.result()));
	else
		return AddDeviceGroupOutcome(outcome.error());
}

void LtoClient::addDeviceGroupAsync(const AddDeviceGroupRequest& request, const AddDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AddDeviceGroupOutcomeCallable LtoClient::addDeviceGroupCallable(const AddDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->addDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AddMemberOutcome LtoClient::addMember(const AddMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMemberOutcome(AddMemberResult(outcome.result()));
	else
		return AddMemberOutcome(outcome.error());
}

void LtoClient::addMemberAsync(const AddMemberRequest& request, const AddMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AddMemberOutcomeCallable LtoClient::addMemberCallable(const AddMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMemberOutcome()>>(
			[this, request]()
			{
			return this->addMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AddPrivacyRuleOutcome LtoClient::addPrivacyRule(const AddPrivacyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPrivacyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPrivacyRuleOutcome(AddPrivacyRuleResult(outcome.result()));
	else
		return AddPrivacyRuleOutcome(outcome.error());
}

void LtoClient::addPrivacyRuleAsync(const AddPrivacyRuleRequest& request, const AddPrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPrivacyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AddPrivacyRuleOutcomeCallable LtoClient::addPrivacyRuleCallable(const AddPrivacyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPrivacyRuleOutcome()>>(
			[this, request]()
			{
			return this->addPrivacyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AddRouteRuleOutcome LtoClient::addRouteRule(const AddRouteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRouteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRouteRuleOutcome(AddRouteRuleResult(outcome.result()));
	else
		return AddRouteRuleOutcome(outcome.error());
}

void LtoClient::addRouteRuleAsync(const AddRouteRuleRequest& request, const AddRouteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRouteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AddRouteRuleOutcomeCallable LtoClient::addRouteRuleCallable(const AddRouteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRouteRuleOutcome()>>(
			[this, request]()
			{
			return this->addRouteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AgreeMemberAccessOutcome LtoClient::agreeMemberAccess(const AgreeMemberAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AgreeMemberAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AgreeMemberAccessOutcome(AgreeMemberAccessResult(outcome.result()));
	else
		return AgreeMemberAccessOutcome(outcome.error());
}

void LtoClient::agreeMemberAccessAsync(const AgreeMemberAccessRequest& request, const AgreeMemberAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, agreeMemberAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AgreeMemberAccessOutcomeCallable LtoClient::agreeMemberAccessCallable(const AgreeMemberAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AgreeMemberAccessOutcome()>>(
			[this, request]()
			{
			return this->agreeMemberAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AuthorizeBaaSOutcome LtoClient::authorizeBaaS(const AuthorizeBaaSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeBaaSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeBaaSOutcome(AuthorizeBaaSResult(outcome.result()));
	else
		return AuthorizeBaaSOutcome(outcome.error());
}

void LtoClient::authorizeBaaSAsync(const AuthorizeBaaSRequest& request, const AuthorizeBaaSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeBaaS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AuthorizeBaaSOutcomeCallable LtoClient::authorizeBaaSCallable(const AuthorizeBaaSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeBaaSOutcome()>>(
			[this, request]()
			{
			return this->authorizeBaaS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AuthorizeDeviceGroupBizChainOutcome LtoClient::authorizeDeviceGroupBizChain(const AuthorizeDeviceGroupBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeDeviceGroupBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeDeviceGroupBizChainOutcome(AuthorizeDeviceGroupBizChainResult(outcome.result()));
	else
		return AuthorizeDeviceGroupBizChainOutcome(outcome.error());
}

void LtoClient::authorizeDeviceGroupBizChainAsync(const AuthorizeDeviceGroupBizChainRequest& request, const AuthorizeDeviceGroupBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeDeviceGroupBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AuthorizeDeviceGroupBizChainOutcomeCallable LtoClient::authorizeDeviceGroupBizChainCallable(const AuthorizeDeviceGroupBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeDeviceGroupBizChainOutcome()>>(
			[this, request]()
			{
			return this->authorizeDeviceGroupBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::AuthorizeMemberBizChainOutcome LtoClient::authorizeMemberBizChain(const AuthorizeMemberBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeMemberBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeMemberBizChainOutcome(AuthorizeMemberBizChainResult(outcome.result()));
	else
		return AuthorizeMemberBizChainOutcome(outcome.error());
}

void LtoClient::authorizeMemberBizChainAsync(const AuthorizeMemberBizChainRequest& request, const AuthorizeMemberBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeMemberBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::AuthorizeMemberBizChainOutcomeCallable LtoClient::authorizeMemberBizChainCallable(const AuthorizeMemberBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeMemberBizChainOutcome()>>(
			[this, request]()
			{
			return this->authorizeMemberBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DeletePrivacyRuleOutcome LtoClient::deletePrivacyRule(const DeletePrivacyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrivacyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrivacyRuleOutcome(DeletePrivacyRuleResult(outcome.result()));
	else
		return DeletePrivacyRuleOutcome(outcome.error());
}

void LtoClient::deletePrivacyRuleAsync(const DeletePrivacyRuleRequest& request, const DeletePrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrivacyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DeletePrivacyRuleOutcomeCallable LtoClient::deletePrivacyRuleCallable(const DeletePrivacyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrivacyRuleOutcome()>>(
			[this, request]()
			{
			return this->deletePrivacyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DeleteRouteRuleOutcome LtoClient::deleteRouteRule(const DeleteRouteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouteRuleOutcome(DeleteRouteRuleResult(outcome.result()));
	else
		return DeleteRouteRuleOutcome(outcome.error());
}

void LtoClient::deleteRouteRuleAsync(const DeleteRouteRuleRequest& request, const DeleteRouteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DeleteRouteRuleOutcomeCallable LtoClient::deleteRouteRuleCallable(const DeleteRouteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRouteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DeniedMemberAccessOutcome LtoClient::deniedMemberAccess(const DeniedMemberAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeniedMemberAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeniedMemberAccessOutcome(DeniedMemberAccessResult(outcome.result()));
	else
		return DeniedMemberAccessOutcome(outcome.error());
}

void LtoClient::deniedMemberAccessAsync(const DeniedMemberAccessRequest& request, const DeniedMemberAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deniedMemberAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DeniedMemberAccessOutcomeCallable LtoClient::deniedMemberAccessCallable(const DeniedMemberAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeniedMemberAccessOutcome()>>(
			[this, request]()
			{
			return this->deniedMemberAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeAccountRoleOutcome LtoClient::describeAccountRole(const DescribeAccountRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountRoleOutcome(DescribeAccountRoleResult(outcome.result()));
	else
		return DescribeAccountRoleOutcome(outcome.error());
}

void LtoClient::describeAccountRoleAsync(const DescribeAccountRoleRequest& request, const DescribeAccountRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeAccountRoleOutcomeCallable LtoClient::describeAccountRoleCallable(const DescribeAccountRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountRoleOutcome()>>(
			[this, request]()
			{
			return this->describeAccountRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeAdminInfoOutcome LtoClient::describeAdminInfo(const DescribeAdminInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAdminInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAdminInfoOutcome(DescribeAdminInfoResult(outcome.result()));
	else
		return DescribeAdminInfoOutcome(outcome.error());
}

void LtoClient::describeAdminInfoAsync(const DescribeAdminInfoRequest& request, const DescribeAdminInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAdminInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeAdminInfoOutcomeCallable LtoClient::describeAdminInfoCallable(const DescribeAdminInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAdminInfoOutcome()>>(
			[this, request]()
			{
			return this->describeAdminInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeBizChainStatInfoOutcome LtoClient::describeBizChainStatInfo(const DescribeBizChainStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBizChainStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBizChainStatInfoOutcome(DescribeBizChainStatInfoResult(outcome.result()));
	else
		return DescribeBizChainStatInfoOutcome(outcome.error());
}

void LtoClient::describeBizChainStatInfoAsync(const DescribeBizChainStatInfoRequest& request, const DescribeBizChainStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBizChainStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeBizChainStatInfoOutcomeCallable LtoClient::describeBizChainStatInfoCallable(const DescribeBizChainStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBizChainStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeBizChainStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeDashboardApiInfoOutcome LtoClient::describeDashboardApiInfo(const DescribeDashboardApiInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDashboardApiInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDashboardApiInfoOutcome(DescribeDashboardApiInfoResult(outcome.result()));
	else
		return DescribeDashboardApiInfoOutcome(outcome.error());
}

void LtoClient::describeDashboardApiInfoAsync(const DescribeDashboardApiInfoRequest& request, const DescribeDashboardApiInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDashboardApiInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeDashboardApiInfoOutcomeCallable LtoClient::describeDashboardApiInfoCallable(const DescribeDashboardApiInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDashboardApiInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDashboardApiInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeDashboardBaseInfoOutcome LtoClient::describeDashboardBaseInfo(const DescribeDashboardBaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDashboardBaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDashboardBaseInfoOutcome(DescribeDashboardBaseInfoResult(outcome.result()));
	else
		return DescribeDashboardBaseInfoOutcome(outcome.error());
}

void LtoClient::describeDashboardBaseInfoAsync(const DescribeDashboardBaseInfoRequest& request, const DescribeDashboardBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDashboardBaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeDashboardBaseInfoOutcomeCallable LtoClient::describeDashboardBaseInfoCallable(const DescribeDashboardBaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDashboardBaseInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDashboardBaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeDashboardDeviceInfoOutcome LtoClient::describeDashboardDeviceInfo(const DescribeDashboardDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDashboardDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDashboardDeviceInfoOutcome(DescribeDashboardDeviceInfoResult(outcome.result()));
	else
		return DescribeDashboardDeviceInfoOutcome(outcome.error());
}

void LtoClient::describeDashboardDeviceInfoAsync(const DescribeDashboardDeviceInfoRequest& request, const DescribeDashboardDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDashboardDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeDashboardDeviceInfoOutcomeCallable LtoClient::describeDashboardDeviceInfoCallable(const DescribeDashboardDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDashboardDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDashboardDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeDashboardMemberApiInfoOutcome LtoClient::describeDashboardMemberApiInfo(const DescribeDashboardMemberApiInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDashboardMemberApiInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDashboardMemberApiInfoOutcome(DescribeDashboardMemberApiInfoResult(outcome.result()));
	else
		return DescribeDashboardMemberApiInfoOutcome(outcome.error());
}

void LtoClient::describeDashboardMemberApiInfoAsync(const DescribeDashboardMemberApiInfoRequest& request, const DescribeDashboardMemberApiInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDashboardMemberApiInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeDashboardMemberApiInfoOutcomeCallable LtoClient::describeDashboardMemberApiInfoCallable(const DescribeDashboardMemberApiInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDashboardMemberApiInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDashboardMemberApiInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeDashboardMemberDeviceInfoOutcome LtoClient::describeDashboardMemberDeviceInfo(const DescribeDashboardMemberDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDashboardMemberDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDashboardMemberDeviceInfoOutcome(DescribeDashboardMemberDeviceInfoResult(outcome.result()));
	else
		return DescribeDashboardMemberDeviceInfoOutcome(outcome.error());
}

void LtoClient::describeDashboardMemberDeviceInfoAsync(const DescribeDashboardMemberDeviceInfoRequest& request, const DescribeDashboardMemberDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDashboardMemberDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeDashboardMemberDeviceInfoOutcomeCallable LtoClient::describeDashboardMemberDeviceInfoCallable(const DescribeDashboardMemberDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDashboardMemberDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDashboardMemberDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeDeviceInfoOutcome LtoClient::describeDeviceInfo(const DescribeDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceInfoOutcome(DescribeDeviceInfoResult(outcome.result()));
	else
		return DescribeDeviceInfoOutcome(outcome.error());
}

void LtoClient::describeDeviceInfoAsync(const DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeDeviceInfoOutcomeCallable LtoClient::describeDeviceInfoCallable(const DescribeDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeEdgeStatInfoOutcome LtoClient::describeEdgeStatInfo(const DescribeEdgeStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEdgeStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEdgeStatInfoOutcome(DescribeEdgeStatInfoResult(outcome.result()));
	else
		return DescribeEdgeStatInfoOutcome(outcome.error());
}

void LtoClient::describeEdgeStatInfoAsync(const DescribeEdgeStatInfoRequest& request, const DescribeEdgeStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEdgeStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeEdgeStatInfoOutcomeCallable LtoClient::describeEdgeStatInfoCallable(const DescribeEdgeStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEdgeStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeEdgeStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeMemberBizChainStatInfoOutcome LtoClient::describeMemberBizChainStatInfo(const DescribeMemberBizChainStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMemberBizChainStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMemberBizChainStatInfoOutcome(DescribeMemberBizChainStatInfoResult(outcome.result()));
	else
		return DescribeMemberBizChainStatInfoOutcome(outcome.error());
}

void LtoClient::describeMemberBizChainStatInfoAsync(const DescribeMemberBizChainStatInfoRequest& request, const DescribeMemberBizChainStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMemberBizChainStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeMemberBizChainStatInfoOutcomeCallable LtoClient::describeMemberBizChainStatInfoCallable(const DescribeMemberBizChainStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMemberBizChainStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeMemberBizChainStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeMemberStatInfoOutcome LtoClient::describeMemberStatInfo(const DescribeMemberStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMemberStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMemberStatInfoOutcome(DescribeMemberStatInfoResult(outcome.result()));
	else
		return DescribeMemberStatInfoOutcome(outcome.error());
}

void LtoClient::describeMemberStatInfoAsync(const DescribeMemberStatInfoRequest& request, const DescribeMemberStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMemberStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeMemberStatInfoOutcomeCallable LtoClient::describeMemberStatInfoCallable(const DescribeMemberStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMemberStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeMemberStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeMemberTotalStatInfoOutcome LtoClient::describeMemberTotalStatInfo(const DescribeMemberTotalStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMemberTotalStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMemberTotalStatInfoOutcome(DescribeMemberTotalStatInfoResult(outcome.result()));
	else
		return DescribeMemberTotalStatInfoOutcome(outcome.error());
}

void LtoClient::describeMemberTotalStatInfoAsync(const DescribeMemberTotalStatInfoRequest& request, const DescribeMemberTotalStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMemberTotalStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeMemberTotalStatInfoOutcomeCallable LtoClient::describeMemberTotalStatInfoCallable(const DescribeMemberTotalStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMemberTotalStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeMemberTotalStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribePackgeInfoOutcome LtoClient::describePackgeInfo(const DescribePackgeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePackgeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePackgeInfoOutcome(DescribePackgeInfoResult(outcome.result()));
	else
		return DescribePackgeInfoOutcome(outcome.error());
}

void LtoClient::describePackgeInfoAsync(const DescribePackgeInfoRequest& request, const DescribePackgeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePackgeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribePackgeInfoOutcomeCallable LtoClient::describePackgeInfoCallable(const DescribePackgeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePackgeInfoOutcome()>>(
			[this, request]()
			{
			return this->describePackgeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeStatDeviceInfoOutcome LtoClient::describeStatDeviceInfo(const DescribeStatDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStatDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStatDeviceInfoOutcome(DescribeStatDeviceInfoResult(outcome.result()));
	else
		return DescribeStatDeviceInfoOutcome(outcome.error());
}

void LtoClient::describeStatDeviceInfoAsync(const DescribeStatDeviceInfoRequest& request, const DescribeStatDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStatDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeStatDeviceInfoOutcomeCallable LtoClient::describeStatDeviceInfoCallable(const DescribeStatDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStatDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeStatDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeStatMemberDeviceInfoOutcome LtoClient::describeStatMemberDeviceInfo(const DescribeStatMemberDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStatMemberDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStatMemberDeviceInfoOutcome(DescribeStatMemberDeviceInfoResult(outcome.result()));
	else
		return DescribeStatMemberDeviceInfoOutcome(outcome.error());
}

void LtoClient::describeStatMemberDeviceInfoAsync(const DescribeStatMemberDeviceInfoRequest& request, const DescribeStatMemberDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStatMemberDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeStatMemberDeviceInfoOutcomeCallable LtoClient::describeStatMemberDeviceInfoCallable(const DescribeStatMemberDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStatMemberDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeStatMemberDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DescribeTotalStatInfoOutcome LtoClient::describeTotalStatInfo(const DescribeTotalStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTotalStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTotalStatInfoOutcome(DescribeTotalStatInfoResult(outcome.result()));
	else
		return DescribeTotalStatInfoOutcome(outcome.error());
}

void LtoClient::describeTotalStatInfoAsync(const DescribeTotalStatInfoRequest& request, const DescribeTotalStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTotalStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DescribeTotalStatInfoOutcomeCallable LtoClient::describeTotalStatInfoCallable(const DescribeTotalStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTotalStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeTotalStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DisableDeviceOutcome LtoClient::disableDevice(const DisableDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDeviceOutcome(DisableDeviceResult(outcome.result()));
	else
		return DisableDeviceOutcome(outcome.error());
}

void LtoClient::disableDeviceAsync(const DisableDeviceRequest& request, const DisableDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DisableDeviceOutcomeCallable LtoClient::disableDeviceCallable(const DisableDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDeviceOutcome()>>(
			[this, request]()
			{
			return this->disableDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DisableDeviceGroupOutcome LtoClient::disableDeviceGroup(const DisableDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableDeviceGroupOutcome(DisableDeviceGroupResult(outcome.result()));
	else
		return DisableDeviceGroupOutcome(outcome.error());
}

void LtoClient::disableDeviceGroupAsync(const DisableDeviceGroupRequest& request, const DisableDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DisableDeviceGroupOutcomeCallable LtoClient::disableDeviceGroupCallable(const DisableDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->disableDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::DownloadPrivacyKeyOutcome LtoClient::downloadPrivacyKey(const DownloadPrivacyKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadPrivacyKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadPrivacyKeyOutcome(DownloadPrivacyKeyResult(outcome.result()));
	else
		return DownloadPrivacyKeyOutcome(outcome.error());
}

void LtoClient::downloadPrivacyKeyAsync(const DownloadPrivacyKeyRequest& request, const DownloadPrivacyKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadPrivacyKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::DownloadPrivacyKeyOutcomeCallable LtoClient::downloadPrivacyKeyCallable(const DownloadPrivacyKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadPrivacyKeyOutcome()>>(
			[this, request]()
			{
			return this->downloadPrivacyKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::EnableDeviceOutcome LtoClient::enableDevice(const EnableDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDeviceOutcome(EnableDeviceResult(outcome.result()));
	else
		return EnableDeviceOutcome(outcome.error());
}

void LtoClient::enableDeviceAsync(const EnableDeviceRequest& request, const EnableDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::EnableDeviceOutcomeCallable LtoClient::enableDeviceCallable(const EnableDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDeviceOutcome()>>(
			[this, request]()
			{
			return this->enableDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::EnableDeviceGroupOutcome LtoClient::enableDeviceGroup(const EnableDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDeviceGroupOutcome(EnableDeviceGroupResult(outcome.result()));
	else
		return EnableDeviceGroupOutcome(outcome.error());
}

void LtoClient::enableDeviceGroupAsync(const EnableDeviceGroupRequest& request, const EnableDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::EnableDeviceGroupOutcomeCallable LtoClient::enableDeviceGroupCallable(const EnableDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->enableDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::FreezeMemberOutcome LtoClient::freezeMember(const FreezeMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FreezeMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FreezeMemberOutcome(FreezeMemberResult(outcome.result()));
	else
		return FreezeMemberOutcome(outcome.error());
}

void LtoClient::freezeMemberAsync(const FreezeMemberRequest& request, const FreezeMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, freezeMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::FreezeMemberOutcomeCallable LtoClient::freezeMemberCallable(const FreezeMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FreezeMemberOutcome()>>(
			[this, request]()
			{
			return this->freezeMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::GetEdgeTotalDeviceCountOutcome LtoClient::getEdgeTotalDeviceCount(const GetEdgeTotalDeviceCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEdgeTotalDeviceCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEdgeTotalDeviceCountOutcome(GetEdgeTotalDeviceCountResult(outcome.result()));
	else
		return GetEdgeTotalDeviceCountOutcome(outcome.error());
}

void LtoClient::getEdgeTotalDeviceCountAsync(const GetEdgeTotalDeviceCountRequest& request, const GetEdgeTotalDeviceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEdgeTotalDeviceCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::GetEdgeTotalDeviceCountOutcomeCallable LtoClient::getEdgeTotalDeviceCountCallable(const GetEdgeTotalDeviceCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEdgeTotalDeviceCountOutcome()>>(
			[this, request]()
			{
			return this->getEdgeTotalDeviceCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllAdminOutcome LtoClient::listAllAdmin(const ListAllAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllAdminOutcome(ListAllAdminResult(outcome.result()));
	else
		return ListAllAdminOutcome(outcome.error());
}

void LtoClient::listAllAdminAsync(const ListAllAdminRequest& request, const ListAllAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllAdminOutcomeCallable LtoClient::listAllAdminCallable(const ListAllAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllAdminOutcome()>>(
			[this, request]()
			{
			return this->listAllAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllBizChainOutcome LtoClient::listAllBizChain(const ListAllBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllBizChainOutcome(ListAllBizChainResult(outcome.result()));
	else
		return ListAllBizChainOutcome(outcome.error());
}

void LtoClient::listAllBizChainAsync(const ListAllBizChainRequest& request, const ListAllBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllBizChainOutcomeCallable LtoClient::listAllBizChainCallable(const ListAllBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllBizChainOutcome()>>(
			[this, request]()
			{
			return this->listAllBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllBizChainContractOutcome LtoClient::listAllBizChainContract(const ListAllBizChainContractRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllBizChainContractOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllBizChainContractOutcome(ListAllBizChainContractResult(outcome.result()));
	else
		return ListAllBizChainContractOutcome(outcome.error());
}

void LtoClient::listAllBizChainContractAsync(const ListAllBizChainContractRequest& request, const ListAllBizChainContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllBizChainContract(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllBizChainContractOutcomeCallable LtoClient::listAllBizChainContractCallable(const ListAllBizChainContractRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllBizChainContractOutcome()>>(
			[this, request]()
			{
			return this->listAllBizChainContract(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllDeviceGroupOutcome LtoClient::listAllDeviceGroup(const ListAllDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllDeviceGroupOutcome(ListAllDeviceGroupResult(outcome.result()));
	else
		return ListAllDeviceGroupOutcome(outcome.error());
}

void LtoClient::listAllDeviceGroupAsync(const ListAllDeviceGroupRequest& request, const ListAllDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllDeviceGroupOutcomeCallable LtoClient::listAllDeviceGroupCallable(const ListAllDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->listAllDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllMemberOutcome LtoClient::listAllMember(const ListAllMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllMemberOutcome(ListAllMemberResult(outcome.result()));
	else
		return ListAllMemberOutcome(outcome.error());
}

void LtoClient::listAllMemberAsync(const ListAllMemberRequest& request, const ListAllMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllMemberOutcomeCallable LtoClient::listAllMemberCallable(const ListAllMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllMemberOutcome()>>(
			[this, request]()
			{
			return this->listAllMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllPrivacyAlgorithmOutcome LtoClient::listAllPrivacyAlgorithm(const ListAllPrivacyAlgorithmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllPrivacyAlgorithmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllPrivacyAlgorithmOutcome(ListAllPrivacyAlgorithmResult(outcome.result()));
	else
		return ListAllPrivacyAlgorithmOutcome(outcome.error());
}

void LtoClient::listAllPrivacyAlgorithmAsync(const ListAllPrivacyAlgorithmRequest& request, const ListAllPrivacyAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllPrivacyAlgorithm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllPrivacyAlgorithmOutcomeCallable LtoClient::listAllPrivacyAlgorithmCallable(const ListAllPrivacyAlgorithmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllPrivacyAlgorithmOutcome()>>(
			[this, request]()
			{
			return this->listAllPrivacyAlgorithm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllPrivacyRuleOutcome LtoClient::listAllPrivacyRule(const ListAllPrivacyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllPrivacyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllPrivacyRuleOutcome(ListAllPrivacyRuleResult(outcome.result()));
	else
		return ListAllPrivacyRuleOutcome(outcome.error());
}

void LtoClient::listAllPrivacyRuleAsync(const ListAllPrivacyRuleRequest& request, const ListAllPrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllPrivacyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllPrivacyRuleOutcomeCallable LtoClient::listAllPrivacyRuleCallable(const ListAllPrivacyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllPrivacyRuleOutcome()>>(
			[this, request]()
			{
			return this->listAllPrivacyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllProductKeyOutcome LtoClient::listAllProductKey(const ListAllProductKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllProductKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllProductKeyOutcome(ListAllProductKeyResult(outcome.result()));
	else
		return ListAllProductKeyOutcome(outcome.error());
}

void LtoClient::listAllProductKeyAsync(const ListAllProductKeyRequest& request, const ListAllProductKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllProductKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllProductKeyOutcomeCallable LtoClient::listAllProductKeyCallable(const ListAllProductKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllProductKeyOutcome()>>(
			[this, request]()
			{
			return this->listAllProductKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListAllSystemContractOutcome LtoClient::listAllSystemContract(const ListAllSystemContractRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllSystemContractOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllSystemContractOutcome(ListAllSystemContractResult(outcome.result()));
	else
		return ListAllSystemContractOutcome(outcome.error());
}

void LtoClient::listAllSystemContractAsync(const ListAllSystemContractRequest& request, const ListAllSystemContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllSystemContract(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListAllSystemContractOutcomeCallable LtoClient::listAllSystemContractCallable(const ListAllSystemContractRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllSystemContractOutcome()>>(
			[this, request]()
			{
			return this->listAllSystemContract(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListBaaSAntChainOutcome LtoClient::listBaaSAntChain(const ListBaaSAntChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaaSAntChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaaSAntChainOutcome(ListBaaSAntChainResult(outcome.result()));
	else
		return ListBaaSAntChainOutcome(outcome.error());
}

void LtoClient::listBaaSAntChainAsync(const ListBaaSAntChainRequest& request, const ListBaaSAntChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaaSAntChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListBaaSAntChainOutcomeCallable LtoClient::listBaaSAntChainCallable(const ListBaaSAntChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaaSAntChainOutcome()>>(
			[this, request]()
			{
			return this->listBaaSAntChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListBaaSAntChainConsortiumOutcome LtoClient::listBaaSAntChainConsortium(const ListBaaSAntChainConsortiumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaaSAntChainConsortiumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaaSAntChainConsortiumOutcome(ListBaaSAntChainConsortiumResult(outcome.result()));
	else
		return ListBaaSAntChainConsortiumOutcome(outcome.error());
}

void LtoClient::listBaaSAntChainConsortiumAsync(const ListBaaSAntChainConsortiumRequest& request, const ListBaaSAntChainConsortiumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaaSAntChainConsortium(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListBaaSAntChainConsortiumOutcomeCallable LtoClient::listBaaSAntChainConsortiumCallable(const ListBaaSAntChainConsortiumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaaSAntChainConsortiumOutcome()>>(
			[this, request]()
			{
			return this->listBaaSAntChainConsortium(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListBaaSAntChainPeerOutcome LtoClient::listBaaSAntChainPeer(const ListBaaSAntChainPeerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaaSAntChainPeerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaaSAntChainPeerOutcome(ListBaaSAntChainPeerResult(outcome.result()));
	else
		return ListBaaSAntChainPeerOutcome(outcome.error());
}

void LtoClient::listBaaSAntChainPeerAsync(const ListBaaSAntChainPeerRequest& request, const ListBaaSAntChainPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaaSAntChainPeer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListBaaSAntChainPeerOutcomeCallable LtoClient::listBaaSAntChainPeerCallable(const ListBaaSAntChainPeerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaaSAntChainPeerOutcome()>>(
			[this, request]()
			{
			return this->listBaaSAntChainPeer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListBaaSFabricChannelOutcome LtoClient::listBaaSFabricChannel(const ListBaaSFabricChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaaSFabricChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaaSFabricChannelOutcome(ListBaaSFabricChannelResult(outcome.result()));
	else
		return ListBaaSFabricChannelOutcome(outcome.error());
}

void LtoClient::listBaaSFabricChannelAsync(const ListBaaSFabricChannelRequest& request, const ListBaaSFabricChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaaSFabricChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListBaaSFabricChannelOutcomeCallable LtoClient::listBaaSFabricChannelCallable(const ListBaaSFabricChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaaSFabricChannelOutcome()>>(
			[this, request]()
			{
			return this->listBaaSFabricChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListBaaSFabricConsortiumOutcome LtoClient::listBaaSFabricConsortium(const ListBaaSFabricConsortiumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaaSFabricConsortiumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaaSFabricConsortiumOutcome(ListBaaSFabricConsortiumResult(outcome.result()));
	else
		return ListBaaSFabricConsortiumOutcome(outcome.error());
}

void LtoClient::listBaaSFabricConsortiumAsync(const ListBaaSFabricConsortiumRequest& request, const ListBaaSFabricConsortiumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaaSFabricConsortium(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListBaaSFabricConsortiumOutcomeCallable LtoClient::listBaaSFabricConsortiumCallable(const ListBaaSFabricConsortiumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaaSFabricConsortiumOutcome()>>(
			[this, request]()
			{
			return this->listBaaSFabricConsortium(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListBaaSFabricOrganizationOutcome LtoClient::listBaaSFabricOrganization(const ListBaaSFabricOrganizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaaSFabricOrganizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaaSFabricOrganizationOutcome(ListBaaSFabricOrganizationResult(outcome.result()));
	else
		return ListBaaSFabricOrganizationOutcome(outcome.error());
}

void LtoClient::listBaaSFabricOrganizationAsync(const ListBaaSFabricOrganizationRequest& request, const ListBaaSFabricOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaaSFabricOrganization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListBaaSFabricOrganizationOutcomeCallable LtoClient::listBaaSFabricOrganizationCallable(const ListBaaSFabricOrganizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaaSFabricOrganizationOutcome()>>(
			[this, request]()
			{
			return this->listBaaSFabricOrganization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListBizChainOutcome LtoClient::listBizChain(const ListBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBizChainOutcome(ListBizChainResult(outcome.result()));
	else
		return ListBizChainOutcome(outcome.error());
}

void LtoClient::listBizChainAsync(const ListBizChainRequest& request, const ListBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListBizChainOutcomeCallable LtoClient::listBizChainCallable(const ListBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBizChainOutcome()>>(
			[this, request]()
			{
			return this->listBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListBizChainDataOutcome LtoClient::listBizChainData(const ListBizChainDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBizChainDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBizChainDataOutcome(ListBizChainDataResult(outcome.result()));
	else
		return ListBizChainDataOutcome(outcome.error());
}

void LtoClient::listBizChainDataAsync(const ListBizChainDataRequest& request, const ListBizChainDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBizChainData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListBizChainDataOutcomeCallable LtoClient::listBizChainDataCallable(const ListBizChainDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBizChainDataOutcome()>>(
			[this, request]()
			{
			return this->listBizChainData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListDeviceOutcome LtoClient::listDevice(const ListDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceOutcome(ListDeviceResult(outcome.result()));
	else
		return ListDeviceOutcome(outcome.error());
}

void LtoClient::listDeviceAsync(const ListDeviceRequest& request, const ListDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListDeviceOutcomeCallable LtoClient::listDeviceCallable(const ListDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceOutcome()>>(
			[this, request]()
			{
			return this->listDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListDeviceGroupOutcome LtoClient::listDeviceGroup(const ListDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceGroupOutcome(ListDeviceGroupResult(outcome.result()));
	else
		return ListDeviceGroupOutcome(outcome.error());
}

void LtoClient::listDeviceGroupAsync(const ListDeviceGroupRequest& request, const ListDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListDeviceGroupOutcomeCallable LtoClient::listDeviceGroupCallable(const ListDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->listDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListDeviceGroupAuthorizedBizChainOutcome LtoClient::listDeviceGroupAuthorizedBizChain(const ListDeviceGroupAuthorizedBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceGroupAuthorizedBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceGroupAuthorizedBizChainOutcome(ListDeviceGroupAuthorizedBizChainResult(outcome.result()));
	else
		return ListDeviceGroupAuthorizedBizChainOutcome(outcome.error());
}

void LtoClient::listDeviceGroupAuthorizedBizChainAsync(const ListDeviceGroupAuthorizedBizChainRequest& request, const ListDeviceGroupAuthorizedBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceGroupAuthorizedBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListDeviceGroupAuthorizedBizChainOutcomeCallable LtoClient::listDeviceGroupAuthorizedBizChainCallable(const ListDeviceGroupAuthorizedBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceGroupAuthorizedBizChainOutcome()>>(
			[this, request]()
			{
			return this->listDeviceGroupAuthorizedBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListEdgeDeviceOutcome LtoClient::listEdgeDevice(const ListEdgeDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEdgeDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEdgeDeviceOutcome(ListEdgeDeviceResult(outcome.result()));
	else
		return ListEdgeDeviceOutcome(outcome.error());
}

void LtoClient::listEdgeDeviceAsync(const ListEdgeDeviceRequest& request, const ListEdgeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEdgeDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListEdgeDeviceOutcomeCallable LtoClient::listEdgeDeviceCallable(const ListEdgeDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEdgeDeviceOutcome()>>(
			[this, request]()
			{
			return this->listEdgeDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListEdgeDeviceGroupOutcome LtoClient::listEdgeDeviceGroup(const ListEdgeDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEdgeDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEdgeDeviceGroupOutcome(ListEdgeDeviceGroupResult(outcome.result()));
	else
		return ListEdgeDeviceGroupOutcome(outcome.error());
}

void LtoClient::listEdgeDeviceGroupAsync(const ListEdgeDeviceGroupRequest& request, const ListEdgeDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEdgeDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListEdgeDeviceGroupOutcomeCallable LtoClient::listEdgeDeviceGroupCallable(const ListEdgeDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEdgeDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->listEdgeDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListMemberOutcome LtoClient::listMember(const ListMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMemberOutcome(ListMemberResult(outcome.result()));
	else
		return ListMemberOutcome(outcome.error());
}

void LtoClient::listMemberAsync(const ListMemberRequest& request, const ListMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListMemberOutcomeCallable LtoClient::listMemberCallable(const ListMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMemberOutcome()>>(
			[this, request]()
			{
			return this->listMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListMemberAccessRecordOutcome LtoClient::listMemberAccessRecord(const ListMemberAccessRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMemberAccessRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMemberAccessRecordOutcome(ListMemberAccessRecordResult(outcome.result()));
	else
		return ListMemberAccessRecordOutcome(outcome.error());
}

void LtoClient::listMemberAccessRecordAsync(const ListMemberAccessRecordRequest& request, const ListMemberAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMemberAccessRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListMemberAccessRecordOutcomeCallable LtoClient::listMemberAccessRecordCallable(const ListMemberAccessRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMemberAccessRecordOutcome()>>(
			[this, request]()
			{
			return this->listMemberAccessRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListMemberAuthorizedBizChainOutcome LtoClient::listMemberAuthorizedBizChain(const ListMemberAuthorizedBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMemberAuthorizedBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMemberAuthorizedBizChainOutcome(ListMemberAuthorizedBizChainResult(outcome.result()));
	else
		return ListMemberAuthorizedBizChainOutcome(outcome.error());
}

void LtoClient::listMemberAuthorizedBizChainAsync(const ListMemberAuthorizedBizChainRequest& request, const ListMemberAuthorizedBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMemberAuthorizedBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListMemberAuthorizedBizChainOutcomeCallable LtoClient::listMemberAuthorizedBizChainCallable(const ListMemberAuthorizedBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMemberAuthorizedBizChainOutcome()>>(
			[this, request]()
			{
			return this->listMemberAuthorizedBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListPrivacyRuleOutcome LtoClient::listPrivacyRule(const ListPrivacyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivacyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivacyRuleOutcome(ListPrivacyRuleResult(outcome.result()));
	else
		return ListPrivacyRuleOutcome(outcome.error());
}

void LtoClient::listPrivacyRuleAsync(const ListPrivacyRuleRequest& request, const ListPrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivacyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListPrivacyRuleOutcomeCallable LtoClient::listPrivacyRuleCallable(const ListPrivacyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivacyRuleOutcome()>>(
			[this, request]()
			{
			return this->listPrivacyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListPrivacyRuleSharedMemberOutcome LtoClient::listPrivacyRuleSharedMember(const ListPrivacyRuleSharedMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivacyRuleSharedMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivacyRuleSharedMemberOutcome(ListPrivacyRuleSharedMemberResult(outcome.result()));
	else
		return ListPrivacyRuleSharedMemberOutcome(outcome.error());
}

void LtoClient::listPrivacyRuleSharedMemberAsync(const ListPrivacyRuleSharedMemberRequest& request, const ListPrivacyRuleSharedMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivacyRuleSharedMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListPrivacyRuleSharedMemberOutcomeCallable LtoClient::listPrivacyRuleSharedMemberCallable(const ListPrivacyRuleSharedMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivacyRuleSharedMemberOutcome()>>(
			[this, request]()
			{
			return this->listPrivacyRuleSharedMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::ListRouteRuleOutcome LtoClient::listRouteRule(const ListRouteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRouteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRouteRuleOutcome(ListRouteRuleResult(outcome.result()));
	else
		return ListRouteRuleOutcome(outcome.error());
}

void LtoClient::listRouteRuleAsync(const ListRouteRuleRequest& request, const ListRouteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRouteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::ListRouteRuleOutcomeCallable LtoClient::listRouteRuleCallable(const ListRouteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRouteRuleOutcome()>>(
			[this, request]()
			{
			return this->listRouteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::QueryBlockchainDataOutcome LtoClient::queryBlockchainData(const QueryBlockchainDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBlockchainDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBlockchainDataOutcome(QueryBlockchainDataResult(outcome.result()));
	else
		return QueryBlockchainDataOutcome(outcome.error());
}

void LtoClient::queryBlockchainDataAsync(const QueryBlockchainDataRequest& request, const QueryBlockchainDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBlockchainData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::QueryBlockchainDataOutcomeCallable LtoClient::queryBlockchainDataCallable(const QueryBlockchainDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBlockchainDataOutcome()>>(
			[this, request]()
			{
			return this->queryBlockchainData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::QueryBlockchainMetadataOutcome LtoClient::queryBlockchainMetadata(const QueryBlockchainMetadataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBlockchainMetadataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBlockchainMetadataOutcome(QueryBlockchainMetadataResult(outcome.result()));
	else
		return QueryBlockchainMetadataOutcome(outcome.error());
}

void LtoClient::queryBlockchainMetadataAsync(const QueryBlockchainMetadataRequest& request, const QueryBlockchainMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBlockchainMetadata(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::QueryBlockchainMetadataOutcomeCallable LtoClient::queryBlockchainMetadataCallable(const QueryBlockchainMetadataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBlockchainMetadataOutcome()>>(
			[this, request]()
			{
			return this->queryBlockchainMetadata(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::SharePrivacyRuleOutcome LtoClient::sharePrivacyRule(const SharePrivacyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SharePrivacyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SharePrivacyRuleOutcome(SharePrivacyRuleResult(outcome.result()));
	else
		return SharePrivacyRuleOutcome(outcome.error());
}

void LtoClient::sharePrivacyRuleAsync(const SharePrivacyRuleRequest& request, const SharePrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sharePrivacyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::SharePrivacyRuleOutcomeCallable LtoClient::sharePrivacyRuleCallable(const SharePrivacyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SharePrivacyRuleOutcome()>>(
			[this, request]()
			{
			return this->sharePrivacyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::UnFreezeMemberOutcome LtoClient::unFreezeMember(const UnFreezeMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnFreezeMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnFreezeMemberOutcome(UnFreezeMemberResult(outcome.result()));
	else
		return UnFreezeMemberOutcome(outcome.error());
}

void LtoClient::unFreezeMemberAsync(const UnFreezeMemberRequest& request, const UnFreezeMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unFreezeMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::UnFreezeMemberOutcomeCallable LtoClient::unFreezeMemberCallable(const UnFreezeMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnFreezeMemberOutcome()>>(
			[this, request]()
			{
			return this->unFreezeMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::UpdateBizChainOutcome LtoClient::updateBizChain(const UpdateBizChainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBizChainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBizChainOutcome(UpdateBizChainResult(outcome.result()));
	else
		return UpdateBizChainOutcome(outcome.error());
}

void LtoClient::updateBizChainAsync(const UpdateBizChainRequest& request, const UpdateBizChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBizChain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::UpdateBizChainOutcomeCallable LtoClient::updateBizChainCallable(const UpdateBizChainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBizChainOutcome()>>(
			[this, request]()
			{
			return this->updateBizChain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::UpdateMemberOutcome LtoClient::updateMember(const UpdateMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMemberOutcome(UpdateMemberResult(outcome.result()));
	else
		return UpdateMemberOutcome(outcome.error());
}

void LtoClient::updateMemberAsync(const UpdateMemberRequest& request, const UpdateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::UpdateMemberOutcomeCallable LtoClient::updateMemberCallable(const UpdateMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMemberOutcome()>>(
			[this, request]()
			{
			return this->updateMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::UpdatePrivacyRuleOutcome LtoClient::updatePrivacyRule(const UpdatePrivacyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrivacyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrivacyRuleOutcome(UpdatePrivacyRuleResult(outcome.result()));
	else
		return UpdatePrivacyRuleOutcome(outcome.error());
}

void LtoClient::updatePrivacyRuleAsync(const UpdatePrivacyRuleRequest& request, const UpdatePrivacyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrivacyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::UpdatePrivacyRuleOutcomeCallable LtoClient::updatePrivacyRuleCallable(const UpdatePrivacyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrivacyRuleOutcome()>>(
			[this, request]()
			{
			return this->updatePrivacyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::UpdateRouteRuleOutcome LtoClient::updateRouteRule(const UpdateRouteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRouteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRouteRuleOutcome(UpdateRouteRuleResult(outcome.result()));
	else
		return UpdateRouteRuleOutcome(outcome.error());
}

void LtoClient::updateRouteRuleAsync(const UpdateRouteRuleRequest& request, const UpdateRouteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRouteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::UpdateRouteRuleOutcomeCallable LtoClient::updateRouteRuleCallable(const UpdateRouteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRouteRuleOutcome()>>(
			[this, request]()
			{
			return this->updateRouteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LtoClient::UploadIoTDataToBlockchainOutcome LtoClient::uploadIoTDataToBlockchain(const UploadIoTDataToBlockchainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadIoTDataToBlockchainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadIoTDataToBlockchainOutcome(UploadIoTDataToBlockchainResult(outcome.result()));
	else
		return UploadIoTDataToBlockchainOutcome(outcome.error());
}

void LtoClient::uploadIoTDataToBlockchainAsync(const UploadIoTDataToBlockchainRequest& request, const UploadIoTDataToBlockchainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadIoTDataToBlockchain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LtoClient::UploadIoTDataToBlockchainOutcomeCallable LtoClient::uploadIoTDataToBlockchainCallable(const UploadIoTDataToBlockchainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadIoTDataToBlockchainOutcome()>>(
			[this, request]()
			{
			return this->uploadIoTDataToBlockchain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

