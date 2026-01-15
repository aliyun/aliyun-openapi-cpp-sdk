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

#include <alibabacloud/websitebuild/WebsiteBuildClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

namespace
{
	const std::string SERVICE_NAME = "WebsiteBuild";
}

WebsiteBuildClient::WebsiteBuildClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WebsiteBuildClient::WebsiteBuildClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WebsiteBuildClient::WebsiteBuildClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

WebsiteBuildClient::~WebsiteBuildClient()
{}

WebsiteBuildClient::BindAppDomainOutcome WebsiteBuildClient::bindAppDomain(const BindAppDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAppDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAppDomainOutcome(BindAppDomainResult(outcome.result()));
	else
		return BindAppDomainOutcome(outcome.error());
}

void WebsiteBuildClient::bindAppDomainAsync(const BindAppDomainRequest& request, const BindAppDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAppDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::BindAppDomainOutcomeCallable WebsiteBuildClient::bindAppDomainCallable(const BindAppDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAppDomainOutcome()>>(
			[this, request]()
			{
			return this->bindAppDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::CreateAppInstanceOutcome WebsiteBuildClient::createAppInstance(const CreateAppInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppInstanceOutcome(CreateAppInstanceResult(outcome.result()));
	else
		return CreateAppInstanceOutcome(outcome.error());
}

void WebsiteBuildClient::createAppInstanceAsync(const CreateAppInstanceRequest& request, const CreateAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::CreateAppInstanceOutcomeCallable WebsiteBuildClient::createAppInstanceCallable(const CreateAppInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppInstanceOutcome()>>(
			[this, request]()
			{
			return this->createAppInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::CreateAppInstanceTicketOutcome WebsiteBuildClient::createAppInstanceTicket(const CreateAppInstanceTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppInstanceTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppInstanceTicketOutcome(CreateAppInstanceTicketResult(outcome.result()));
	else
		return CreateAppInstanceTicketOutcome(outcome.error());
}

void WebsiteBuildClient::createAppInstanceTicketAsync(const CreateAppInstanceTicketRequest& request, const CreateAppInstanceTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppInstanceTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::CreateAppInstanceTicketOutcomeCallable WebsiteBuildClient::createAppInstanceTicketCallable(const CreateAppInstanceTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppInstanceTicketOutcome()>>(
			[this, request]()
			{
			return this->createAppInstanceTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::CreateLogoTaskOutcome WebsiteBuildClient::createLogoTask(const CreateLogoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLogoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLogoTaskOutcome(CreateLogoTaskResult(outcome.result()));
	else
		return CreateLogoTaskOutcome(outcome.error());
}

void WebsiteBuildClient::createLogoTaskAsync(const CreateLogoTaskRequest& request, const CreateLogoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLogoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::CreateLogoTaskOutcomeCallable WebsiteBuildClient::createLogoTaskCallable(const CreateLogoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLogoTaskOutcome()>>(
			[this, request]()
			{
			return this->createLogoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::DeleteAppDomainCertificateOutcome WebsiteBuildClient::deleteAppDomainCertificate(const DeleteAppDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppDomainCertificateOutcome(DeleteAppDomainCertificateResult(outcome.result()));
	else
		return DeleteAppDomainCertificateOutcome(outcome.error());
}

void WebsiteBuildClient::deleteAppDomainCertificateAsync(const DeleteAppDomainCertificateRequest& request, const DeleteAppDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::DeleteAppDomainCertificateOutcomeCallable WebsiteBuildClient::deleteAppDomainCertificateCallable(const DeleteAppDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->deleteAppDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::DeleteAppDomainRedirectOutcome WebsiteBuildClient::deleteAppDomainRedirect(const DeleteAppDomainRedirectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppDomainRedirectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppDomainRedirectOutcome(DeleteAppDomainRedirectResult(outcome.result()));
	else
		return DeleteAppDomainRedirectOutcome(outcome.error());
}

void WebsiteBuildClient::deleteAppDomainRedirectAsync(const DeleteAppDomainRedirectRequest& request, const DeleteAppDomainRedirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppDomainRedirect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::DeleteAppDomainRedirectOutcomeCallable WebsiteBuildClient::deleteAppDomainRedirectCallable(const DeleteAppDomainRedirectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppDomainRedirectOutcome()>>(
			[this, request]()
			{
			return this->deleteAppDomainRedirect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::DescribeAppDomainDnsRecordOutcome WebsiteBuildClient::describeAppDomainDnsRecord(const DescribeAppDomainDnsRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppDomainDnsRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppDomainDnsRecordOutcome(DescribeAppDomainDnsRecordResult(outcome.result()));
	else
		return DescribeAppDomainDnsRecordOutcome(outcome.error());
}

void WebsiteBuildClient::describeAppDomainDnsRecordAsync(const DescribeAppDomainDnsRecordRequest& request, const DescribeAppDomainDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppDomainDnsRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::DescribeAppDomainDnsRecordOutcomeCallable WebsiteBuildClient::describeAppDomainDnsRecordCallable(const DescribeAppDomainDnsRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppDomainDnsRecordOutcome()>>(
			[this, request]()
			{
			return this->describeAppDomainDnsRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::DispatchConsoleAPIForPartnerOutcome WebsiteBuildClient::dispatchConsoleAPIForPartner(const DispatchConsoleAPIForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DispatchConsoleAPIForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DispatchConsoleAPIForPartnerOutcome(DispatchConsoleAPIForPartnerResult(outcome.result()));
	else
		return DispatchConsoleAPIForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::dispatchConsoleAPIForPartnerAsync(const DispatchConsoleAPIForPartnerRequest& request, const DispatchConsoleAPIForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dispatchConsoleAPIForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::DispatchConsoleAPIForPartnerOutcomeCallable WebsiteBuildClient::dispatchConsoleAPIForPartnerCallable(const DispatchConsoleAPIForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DispatchConsoleAPIForPartnerOutcome()>>(
			[this, request]()
			{
			return this->dispatchConsoleAPIForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::GetAppInstanceOutcome WebsiteBuildClient::getAppInstance(const GetAppInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppInstanceOutcome(GetAppInstanceResult(outcome.result()));
	else
		return GetAppInstanceOutcome(outcome.error());
}

void WebsiteBuildClient::getAppInstanceAsync(const GetAppInstanceRequest& request, const GetAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::GetAppInstanceOutcomeCallable WebsiteBuildClient::getAppInstanceCallable(const GetAppInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppInstanceOutcome()>>(
			[this, request]()
			{
			return this->getAppInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::GetCreateLogoTaskOutcome WebsiteBuildClient::getCreateLogoTask(const GetCreateLogoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreateLogoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreateLogoTaskOutcome(GetCreateLogoTaskResult(outcome.result()));
	else
		return GetCreateLogoTaskOutcome(outcome.error());
}

void WebsiteBuildClient::getCreateLogoTaskAsync(const GetCreateLogoTaskRequest& request, const GetCreateLogoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreateLogoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::GetCreateLogoTaskOutcomeCallable WebsiteBuildClient::getCreateLogoTaskCallable(const GetCreateLogoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreateLogoTaskOutcome()>>(
			[this, request]()
			{
			return this->getCreateLogoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::GetDomainInfoForPartnerOutcome WebsiteBuildClient::getDomainInfoForPartner(const GetDomainInfoForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDomainInfoForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDomainInfoForPartnerOutcome(GetDomainInfoForPartnerResult(outcome.result()));
	else
		return GetDomainInfoForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::getDomainInfoForPartnerAsync(const GetDomainInfoForPartnerRequest& request, const GetDomainInfoForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDomainInfoForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::GetDomainInfoForPartnerOutcomeCallable WebsiteBuildClient::getDomainInfoForPartnerCallable(const GetDomainInfoForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDomainInfoForPartnerOutcome()>>(
			[this, request]()
			{
			return this->getDomainInfoForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::GetIcpFilingInfoForPartnerOutcome WebsiteBuildClient::getIcpFilingInfoForPartner(const GetIcpFilingInfoForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIcpFilingInfoForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIcpFilingInfoForPartnerOutcome(GetIcpFilingInfoForPartnerResult(outcome.result()));
	else
		return GetIcpFilingInfoForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::getIcpFilingInfoForPartnerAsync(const GetIcpFilingInfoForPartnerRequest& request, const GetIcpFilingInfoForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIcpFilingInfoForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::GetIcpFilingInfoForPartnerOutcomeCallable WebsiteBuildClient::getIcpFilingInfoForPartnerCallable(const GetIcpFilingInfoForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIcpFilingInfoForPartnerOutcome()>>(
			[this, request]()
			{
			return this->getIcpFilingInfoForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::GetUserAccessTokenForPartnerOutcome WebsiteBuildClient::getUserAccessTokenForPartner(const GetUserAccessTokenForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserAccessTokenForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserAccessTokenForPartnerOutcome(GetUserAccessTokenForPartnerResult(outcome.result()));
	else
		return GetUserAccessTokenForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::getUserAccessTokenForPartnerAsync(const GetUserAccessTokenForPartnerRequest& request, const GetUserAccessTokenForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserAccessTokenForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::GetUserAccessTokenForPartnerOutcomeCallable WebsiteBuildClient::getUserAccessTokenForPartnerCallable(const GetUserAccessTokenForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserAccessTokenForPartnerOutcome()>>(
			[this, request]()
			{
			return this->getUserAccessTokenForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::GetUserTmpIdentityForPartnerOutcome WebsiteBuildClient::getUserTmpIdentityForPartner(const GetUserTmpIdentityForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserTmpIdentityForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserTmpIdentityForPartnerOutcome(GetUserTmpIdentityForPartnerResult(outcome.result()));
	else
		return GetUserTmpIdentityForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::getUserTmpIdentityForPartnerAsync(const GetUserTmpIdentityForPartnerRequest& request, const GetUserTmpIdentityForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserTmpIdentityForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::GetUserTmpIdentityForPartnerOutcomeCallable WebsiteBuildClient::getUserTmpIdentityForPartnerCallable(const GetUserTmpIdentityForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserTmpIdentityForPartnerOutcome()>>(
			[this, request]()
			{
			return this->getUserTmpIdentityForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::ListAppDomainRedirectRecordsOutcome WebsiteBuildClient::listAppDomainRedirectRecords(const ListAppDomainRedirectRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppDomainRedirectRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppDomainRedirectRecordsOutcome(ListAppDomainRedirectRecordsResult(outcome.result()));
	else
		return ListAppDomainRedirectRecordsOutcome(outcome.error());
}

void WebsiteBuildClient::listAppDomainRedirectRecordsAsync(const ListAppDomainRedirectRecordsRequest& request, const ListAppDomainRedirectRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppDomainRedirectRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::ListAppDomainRedirectRecordsOutcomeCallable WebsiteBuildClient::listAppDomainRedirectRecordsCallable(const ListAppDomainRedirectRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppDomainRedirectRecordsOutcome()>>(
			[this, request]()
			{
			return this->listAppDomainRedirectRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::ListAppInstanceDomainsOutcome WebsiteBuildClient::listAppInstanceDomains(const ListAppInstanceDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppInstanceDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppInstanceDomainsOutcome(ListAppInstanceDomainsResult(outcome.result()));
	else
		return ListAppInstanceDomainsOutcome(outcome.error());
}

void WebsiteBuildClient::listAppInstanceDomainsAsync(const ListAppInstanceDomainsRequest& request, const ListAppInstanceDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppInstanceDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::ListAppInstanceDomainsOutcomeCallable WebsiteBuildClient::listAppInstanceDomainsCallable(const ListAppInstanceDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppInstanceDomainsOutcome()>>(
			[this, request]()
			{
			return this->listAppInstanceDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::ListAppInstancesOutcome WebsiteBuildClient::listAppInstances(const ListAppInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppInstancesOutcome(ListAppInstancesResult(outcome.result()));
	else
		return ListAppInstancesOutcome(outcome.error());
}

void WebsiteBuildClient::listAppInstancesAsync(const ListAppInstancesRequest& request, const ListAppInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::ListAppInstancesOutcomeCallable WebsiteBuildClient::listAppInstancesCallable(const ListAppInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppInstancesOutcome()>>(
			[this, request]()
			{
			return this->listAppInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::ModifyAppInstanceSpecOutcome WebsiteBuildClient::modifyAppInstanceSpec(const ModifyAppInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAppInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAppInstanceSpecOutcome(ModifyAppInstanceSpecResult(outcome.result()));
	else
		return ModifyAppInstanceSpecOutcome(outcome.error());
}

void WebsiteBuildClient::modifyAppInstanceSpecAsync(const ModifyAppInstanceSpecRequest& request, const ModifyAppInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAppInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::ModifyAppInstanceSpecOutcomeCallable WebsiteBuildClient::modifyAppInstanceSpecCallable(const ModifyAppInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAppInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyAppInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::OperateAppInstanceForPartnerOutcome WebsiteBuildClient::operateAppInstanceForPartner(const OperateAppInstanceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateAppInstanceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateAppInstanceForPartnerOutcome(OperateAppInstanceForPartnerResult(outcome.result()));
	else
		return OperateAppInstanceForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::operateAppInstanceForPartnerAsync(const OperateAppInstanceForPartnerRequest& request, const OperateAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateAppInstanceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::OperateAppInstanceForPartnerOutcomeCallable WebsiteBuildClient::operateAppInstanceForPartnerCallable(const OperateAppInstanceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateAppInstanceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->operateAppInstanceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::OperateAppServiceForPartnerOutcome WebsiteBuildClient::operateAppServiceForPartner(const OperateAppServiceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateAppServiceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateAppServiceForPartnerOutcome(OperateAppServiceForPartnerResult(outcome.result()));
	else
		return OperateAppServiceForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::operateAppServiceForPartnerAsync(const OperateAppServiceForPartnerRequest& request, const OperateAppServiceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateAppServiceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::OperateAppServiceForPartnerOutcomeCallable WebsiteBuildClient::operateAppServiceForPartnerCallable(const OperateAppServiceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateAppServiceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->operateAppServiceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::RefreshAppInstanceTicketOutcome WebsiteBuildClient::refreshAppInstanceTicket(const RefreshAppInstanceTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshAppInstanceTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshAppInstanceTicketOutcome(RefreshAppInstanceTicketResult(outcome.result()));
	else
		return RefreshAppInstanceTicketOutcome(outcome.error());
}

void WebsiteBuildClient::refreshAppInstanceTicketAsync(const RefreshAppInstanceTicketRequest& request, const RefreshAppInstanceTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshAppInstanceTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::RefreshAppInstanceTicketOutcomeCallable WebsiteBuildClient::refreshAppInstanceTicketCallable(const RefreshAppInstanceTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshAppInstanceTicketOutcome()>>(
			[this, request]()
			{
			return this->refreshAppInstanceTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::RefundAppInstanceForPartnerOutcome WebsiteBuildClient::refundAppInstanceForPartner(const RefundAppInstanceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefundAppInstanceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefundAppInstanceForPartnerOutcome(RefundAppInstanceForPartnerResult(outcome.result()));
	else
		return RefundAppInstanceForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::refundAppInstanceForPartnerAsync(const RefundAppInstanceForPartnerRequest& request, const RefundAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refundAppInstanceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::RefundAppInstanceForPartnerOutcomeCallable WebsiteBuildClient::refundAppInstanceForPartnerCallable(const RefundAppInstanceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefundAppInstanceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->refundAppInstanceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::RenewAppInstanceOutcome WebsiteBuildClient::renewAppInstance(const RenewAppInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewAppInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewAppInstanceOutcome(RenewAppInstanceResult(outcome.result()));
	else
		return RenewAppInstanceOutcome(outcome.error());
}

void WebsiteBuildClient::renewAppInstanceAsync(const RenewAppInstanceRequest& request, const RenewAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewAppInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::RenewAppInstanceOutcomeCallable WebsiteBuildClient::renewAppInstanceCallable(const RenewAppInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewAppInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewAppInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::SearchImageOutcome WebsiteBuildClient::searchImage(const SearchImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchImageOutcome(SearchImageResult(outcome.result()));
	else
		return SearchImageOutcome(outcome.error());
}

void WebsiteBuildClient::searchImageAsync(const SearchImageRequest& request, const SearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::SearchImageOutcomeCallable WebsiteBuildClient::searchImageCallable(const SearchImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchImageOutcome()>>(
			[this, request]()
			{
			return this->searchImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::SetAppDomainCertificateOutcome WebsiteBuildClient::setAppDomainCertificate(const SetAppDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAppDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAppDomainCertificateOutcome(SetAppDomainCertificateResult(outcome.result()));
	else
		return SetAppDomainCertificateOutcome(outcome.error());
}

void WebsiteBuildClient::setAppDomainCertificateAsync(const SetAppDomainCertificateRequest& request, const SetAppDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAppDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::SetAppDomainCertificateOutcomeCallable WebsiteBuildClient::setAppDomainCertificateCallable(const SetAppDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAppDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->setAppDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::SyncAppInstanceForPartnerOutcome WebsiteBuildClient::syncAppInstanceForPartner(const SyncAppInstanceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncAppInstanceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncAppInstanceForPartnerOutcome(SyncAppInstanceForPartnerResult(outcome.result()));
	else
		return SyncAppInstanceForPartnerOutcome(outcome.error());
}

void WebsiteBuildClient::syncAppInstanceForPartnerAsync(const SyncAppInstanceForPartnerRequest& request, const SyncAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncAppInstanceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::SyncAppInstanceForPartnerOutcomeCallable WebsiteBuildClient::syncAppInstanceForPartnerCallable(const SyncAppInstanceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncAppInstanceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->syncAppInstanceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

WebsiteBuildClient::UnbindAppDomainOutcome WebsiteBuildClient::unbindAppDomain(const UnbindAppDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindAppDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindAppDomainOutcome(UnbindAppDomainResult(outcome.result()));
	else
		return UnbindAppDomainOutcome(outcome.error());
}

void WebsiteBuildClient::unbindAppDomainAsync(const UnbindAppDomainRequest& request, const UnbindAppDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindAppDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

WebsiteBuildClient::UnbindAppDomainOutcomeCallable WebsiteBuildClient::unbindAppDomainCallable(const UnbindAppDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindAppDomainOutcome()>>(
			[this, request]()
			{
			return this->unbindAppDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

