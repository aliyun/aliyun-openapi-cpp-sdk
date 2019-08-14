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

#include <alibabacloud/cas/CasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

namespace
{
	const std::string SERVICE_NAME = "cas";
}

CasClient::CasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cas");
}

CasClient::CasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cas");
}

CasClient::CasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cas");
}

CasClient::~CasClient()
{}

CasClient::DescribeCertificateStatusCountOutcome CasClient::describeCertificateStatusCount(const DescribeCertificateStatusCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificateStatusCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificateStatusCountOutcome(DescribeCertificateStatusCountResult(outcome.result()));
	else
		return DescribeCertificateStatusCountOutcome(outcome.error());
}

void CasClient::describeCertificateStatusCountAsync(const DescribeCertificateStatusCountRequest& request, const DescribeCertificateStatusCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificateStatusCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCertificateStatusCountOutcomeCallable CasClient::describeCertificateStatusCountCallable(const DescribeCertificateStatusCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificateStatusCountOutcome()>>(
			[this, request]()
			{
			return this->describeCertificateStatusCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeSignatureProductStateOutcome CasClient::describeSignatureProductState(const DescribeSignatureProductStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSignatureProductStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSignatureProductStateOutcome(DescribeSignatureProductStateResult(outcome.result()));
	else
		return DescribeSignatureProductStateOutcome(outcome.error());
}

void CasClient::describeSignatureProductStateAsync(const DescribeSignatureProductStateRequest& request, const DescribeSignatureProductStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSignatureProductState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeSignatureProductStateOutcomeCallable CasClient::describeSignatureProductStateCallable(const DescribeSignatureProductStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSignatureProductStateOutcome()>>(
			[this, request]()
			{
			return this->describeSignatureProductState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOrderRefundRecordOutcome CasClient::describeOrderRefundRecord(const DescribeOrderRefundRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderRefundRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderRefundRecordOutcome(DescribeOrderRefundRecordResult(outcome.result()));
	else
		return DescribeOrderRefundRecordOutcome(outcome.error());
}

void CasClient::describeOrderRefundRecordAsync(const DescribeOrderRefundRecordRequest& request, const DescribeOrderRefundRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrderRefundRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOrderRefundRecordOutcomeCallable CasClient::describeOrderRefundRecordCallable(const DescribeOrderRefundRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderRefundRecordOutcome()>>(
			[this, request]()
			{
			return this->describeOrderRefundRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOrderMaterialOutcome CasClient::describeOrderMaterial(const DescribeOrderMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderMaterialOutcome(DescribeOrderMaterialResult(outcome.result()));
	else
		return DescribeOrderMaterialOutcome(outcome.error());
}

void CasClient::describeOrderMaterialAsync(const DescribeOrderMaterialRequest& request, const DescribeOrderMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrderMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOrderMaterialOutcomeCallable CasClient::describeOrderMaterialCallable(const DescribeOrderMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderMaterialOutcome()>>(
			[this, request]()
			{
			return this->describeOrderMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateOrderDocumentOutcome CasClient::createOrderDocument(const CreateOrderDocumentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderDocumentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderDocumentOutcome(CreateOrderDocumentResult(outcome.result()));
	else
		return CreateOrderDocumentOutcome(outcome.error());
}

void CasClient::createOrderDocumentAsync(const CreateOrderDocumentRequest& request, const CreateOrderDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrderDocument(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateOrderDocumentOutcomeCallable CasClient::createOrderDocumentCallable(const CreateOrderDocumentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderDocumentOutcome()>>(
			[this, request]()
			{
			return this->createOrderDocument(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeExpectationResultOutcome CasClient::describeExpectationResult(const DescribeExpectationResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExpectationResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExpectationResultOutcome(DescribeExpectationResultResult(outcome.result()));
	else
		return DescribeExpectationResultOutcome(outcome.error());
}

void CasClient::describeExpectationResultAsync(const DescribeExpectationResultRequest& request, const DescribeExpectationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExpectationResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeExpectationResultOutcomeCallable CasClient::describeExpectationResultCallable(const DescribeExpectationResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExpectationResultOutcome()>>(
			[this, request]()
			{
			return this->describeExpectationResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::ListTagResourcesOutcome CasClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void CasClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::ListTagResourcesOutcomeCallable CasClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::UntagResourcesOutcome CasClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void CasClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::UntagResourcesOutcomeCallable CasClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateSignaturePeopleCertificateOutcome CasClient::createSignaturePeopleCertificate(const CreateSignaturePeopleCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSignaturePeopleCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSignaturePeopleCertificateOutcome(CreateSignaturePeopleCertificateResult(outcome.result()));
	else
		return CreateSignaturePeopleCertificateOutcome(outcome.error());
}

void CasClient::createSignaturePeopleCertificateAsync(const CreateSignaturePeopleCertificateRequest& request, const CreateSignaturePeopleCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSignaturePeopleCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateSignaturePeopleCertificateOutcomeCallable CasClient::createSignaturePeopleCertificateCallable(const CreateSignaturePeopleCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSignaturePeopleCertificateOutcome()>>(
			[this, request]()
			{
			return this->createSignaturePeopleCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeCertificateListOutcome CasClient::describeCertificateList(const DescribeCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificateListOutcome(DescribeCertificateListResult(outcome.result()));
	else
		return DescribeCertificateListOutcome(outcome.error());
}

void CasClient::describeCertificateListAsync(const DescribeCertificateListRequest& request, const DescribeCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCertificateListOutcomeCallable CasClient::describeCertificateListCallable(const DescribeCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeDomainVerifyConfigurationStatusOutcome CasClient::describeDomainVerifyConfigurationStatus(const DescribeDomainVerifyConfigurationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainVerifyConfigurationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainVerifyConfigurationStatusOutcome(DescribeDomainVerifyConfigurationStatusResult(outcome.result()));
	else
		return DescribeDomainVerifyConfigurationStatusOutcome(outcome.error());
}

void CasClient::describeDomainVerifyConfigurationStatusAsync(const DescribeDomainVerifyConfigurationStatusRequest& request, const DescribeDomainVerifyConfigurationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainVerifyConfigurationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeDomainVerifyConfigurationStatusOutcomeCallable CasClient::describeDomainVerifyConfigurationStatusCallable(const DescribeDomainVerifyConfigurationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainVerifyConfigurationStatusOutcome()>>(
			[this, request]()
			{
			return this->describeDomainVerifyConfigurationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeRenewOrderOutcome CasClient::describeRenewOrder(const DescribeRenewOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRenewOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRenewOrderOutcome(DescribeRenewOrderResult(outcome.result()));
	else
		return DescribeRenewOrderOutcome(outcome.error());
}

void CasClient::describeRenewOrderAsync(const DescribeRenewOrderRequest& request, const DescribeRenewOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRenewOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeRenewOrderOutcomeCallable CasClient::describeRenewOrderCallable(const DescribeRenewOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRenewOrderOutcome()>>(
			[this, request]()
			{
			return this->describeRenewOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateOrderCancelOutcome CasClient::createOrderCancel(const CreateOrderCancelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderCancelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderCancelOutcome(CreateOrderCancelResult(outcome.result()));
	else
		return CreateOrderCancelOutcome(outcome.error());
}

void CasClient::createOrderCancelAsync(const CreateOrderCancelRequest& request, const CreateOrderCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrderCancel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateOrderCancelOutcomeCallable CasClient::createOrderCancelCallable(const CreateOrderCancelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderCancelOutcome()>>(
			[this, request]()
			{
			return this->createOrderCancel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateCertificateOutcome CasClient::createCertificate(const CreateCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCertificateOutcome(CreateCertificateResult(outcome.result()));
	else
		return CreateCertificateOutcome(outcome.error());
}

void CasClient::createCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateCertificateOutcomeCallable CasClient::createCertificateCallable(const CreateCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCertificateOutcome()>>(
			[this, request]()
			{
			return this->createCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeDownloadCertificateOutcome CasClient::describeDownloadCertificate(const DescribeDownloadCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDownloadCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDownloadCertificateOutcome(DescribeDownloadCertificateResult(outcome.result()));
	else
		return DescribeDownloadCertificateOutcome(outcome.error());
}

void CasClient::describeDownloadCertificateAsync(const DescribeDownloadCertificateRequest& request, const DescribeDownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDownloadCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeDownloadCertificateOutcomeCallable CasClient::describeDownloadCertificateCallable(const DescribeDownloadCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDownloadCertificateOutcome()>>(
			[this, request]()
			{
			return this->describeDownloadCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateUnDeploymentOutcome CasClient::createUnDeployment(const CreateUnDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUnDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUnDeploymentOutcome(CreateUnDeploymentResult(outcome.result()));
	else
		return CreateUnDeploymentOutcome(outcome.error());
}

void CasClient::createUnDeploymentAsync(const CreateUnDeploymentRequest& request, const CreateUnDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUnDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateUnDeploymentOutcomeCallable CasClient::createUnDeploymentCallable(const CreateUnDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUnDeploymentOutcome()>>(
			[this, request]()
			{
			return this->createUnDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeSignatureStatisticsOutcome CasClient::describeSignatureStatistics(const DescribeSignatureStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSignatureStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSignatureStatisticsOutcome(DescribeSignatureStatisticsResult(outcome.result()));
	else
		return DescribeSignatureStatisticsOutcome(outcome.error());
}

void CasClient::describeSignatureStatisticsAsync(const DescribeSignatureStatisticsRequest& request, const DescribeSignatureStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSignatureStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeSignatureStatisticsOutcomeCallable CasClient::describeSignatureStatisticsCallable(const DescribeSignatureStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSignatureStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeSignatureStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateOrderMaterialOutcome CasClient::createOrderMaterial(const CreateOrderMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderMaterialOutcome(CreateOrderMaterialResult(outcome.result()));
	else
		return CreateOrderMaterialOutcome(outcome.error());
}

void CasClient::createOrderMaterialAsync(const CreateOrderMaterialRequest& request, const CreateOrderMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrderMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateOrderMaterialOutcomeCallable CasClient::createOrderMaterialCallable(const CreateOrderMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderMaterialOutcome()>>(
			[this, request]()
			{
			return this->createOrderMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeDownloadDomainVerifyConfigurationOutcome CasClient::describeDownloadDomainVerifyConfiguration(const DescribeDownloadDomainVerifyConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDownloadDomainVerifyConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDownloadDomainVerifyConfigurationOutcome(DescribeDownloadDomainVerifyConfigurationResult(outcome.result()));
	else
		return DescribeDownloadDomainVerifyConfigurationOutcome(outcome.error());
}

void CasClient::describeDownloadDomainVerifyConfigurationAsync(const DescribeDownloadDomainVerifyConfigurationRequest& request, const DescribeDownloadDomainVerifyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDownloadDomainVerifyConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeDownloadDomainVerifyConfigurationOutcomeCallable CasClient::describeDownloadDomainVerifyConfigurationCallable(const DescribeDownloadDomainVerifyConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDownloadDomainVerifyConfigurationOutcome()>>(
			[this, request]()
			{
			return this->describeDownloadDomainVerifyConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeDeploymentRegionListOutcome CasClient::describeDeploymentRegionList(const DescribeDeploymentRegionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeploymentRegionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeploymentRegionListOutcome(DescribeDeploymentRegionListResult(outcome.result()));
	else
		return DescribeDeploymentRegionListOutcome(outcome.error());
}

void CasClient::describeDeploymentRegionListAsync(const DescribeDeploymentRegionListRequest& request, const DescribeDeploymentRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeploymentRegionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeDeploymentRegionListOutcomeCallable CasClient::describeDeploymentRegionListCallable(const DescribeDeploymentRegionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeploymentRegionListOutcome()>>(
			[this, request]()
			{
			return this->describeDeploymentRegionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeStsAuthStatusOutcome CasClient::describeStsAuthStatus(const DescribeStsAuthStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStsAuthStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStsAuthStatusOutcome(DescribeStsAuthStatusResult(outcome.result()));
	else
		return DescribeStsAuthStatusOutcome(outcome.error());
}

void CasClient::describeStsAuthStatusAsync(const DescribeStsAuthStatusRequest& request, const DescribeStsAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStsAuthStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeStsAuthStatusOutcomeCallable CasClient::describeStsAuthStatusCallable(const DescribeStsAuthStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStsAuthStatusOutcome()>>(
			[this, request]()
			{
			return this->describeStsAuthStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOrderDocumentOutcome CasClient::describeOrderDocument(const DescribeOrderDocumentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderDocumentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderDocumentOutcome(DescribeOrderDocumentResult(outcome.result()));
	else
		return DescribeOrderDocumentOutcome(outcome.error());
}

void CasClient::describeOrderDocumentAsync(const DescribeOrderDocumentRequest& request, const DescribeOrderDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrderDocument(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOrderDocumentOutcomeCallable CasClient::describeOrderDocumentCallable(const DescribeOrderDocumentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderDocumentOutcome()>>(
			[this, request]()
			{
			return this->describeOrderDocument(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateDeploymentOutcome CasClient::createDeployment(const CreateDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeploymentOutcome(CreateDeploymentResult(outcome.result()));
	else
		return CreateDeploymentOutcome(outcome.error());
}

void CasClient::createDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateDeploymentOutcomeCallable CasClient::createDeploymentCallable(const CreateDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeploymentOutcome()>>(
			[this, request]()
			{
			return this->createDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateDomainVerifyConfigurationStatusOutcome CasClient::createDomainVerifyConfigurationStatus(const CreateDomainVerifyConfigurationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDomainVerifyConfigurationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDomainVerifyConfigurationStatusOutcome(CreateDomainVerifyConfigurationStatusResult(outcome.result()));
	else
		return CreateDomainVerifyConfigurationStatusOutcome(outcome.error());
}

void CasClient::createDomainVerifyConfigurationStatusAsync(const CreateDomainVerifyConfigurationStatusRequest& request, const CreateDomainVerifyConfigurationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDomainVerifyConfigurationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateDomainVerifyConfigurationStatusOutcomeCallable CasClient::createDomainVerifyConfigurationStatusCallable(const CreateDomainVerifyConfigurationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDomainVerifyConfigurationStatusOutcome()>>(
			[this, request]()
			{
			return this->createDomainVerifyConfigurationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOrderCountForConsoleIndexOutcome CasClient::describeOrderCountForConsoleIndex(const DescribeOrderCountForConsoleIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderCountForConsoleIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderCountForConsoleIndexOutcome(DescribeOrderCountForConsoleIndexResult(outcome.result()));
	else
		return DescribeOrderCountForConsoleIndexOutcome(outcome.error());
}

void CasClient::describeOrderCountForConsoleIndexAsync(const DescribeOrderCountForConsoleIndexRequest& request, const DescribeOrderCountForConsoleIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrderCountForConsoleIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOrderCountForConsoleIndexOutcomeCallable CasClient::describeOrderCountForConsoleIndexCallable(const DescribeOrderCountForConsoleIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderCountForConsoleIndexOutcome()>>(
			[this, request]()
			{
			return this->describeOrderCountForConsoleIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateSignatureDocumentOutcome CasClient::createSignatureDocument(const CreateSignatureDocumentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSignatureDocumentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSignatureDocumentOutcome(CreateSignatureDocumentResult(outcome.result()));
	else
		return CreateSignatureDocumentOutcome(outcome.error());
}

void CasClient::createSignatureDocumentAsync(const CreateSignatureDocumentRequest& request, const CreateSignatureDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSignatureDocument(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateSignatureDocumentOutcomeCallable CasClient::createSignatureDocumentCallable(const CreateSignatureDocumentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSignatureDocumentOutcome()>>(
			[this, request]()
			{
			return this->createSignatureDocument(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOrderAuditFailRecordOutcome CasClient::describeOrderAuditFailRecord(const DescribeOrderAuditFailRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderAuditFailRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderAuditFailRecordOutcome(DescribeOrderAuditFailRecordResult(outcome.result()));
	else
		return DescribeOrderAuditFailRecordOutcome(outcome.error());
}

void CasClient::describeOrderAuditFailRecordAsync(const DescribeOrderAuditFailRecordRequest& request, const DescribeOrderAuditFailRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrderAuditFailRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOrderAuditFailRecordOutcomeCallable CasClient::describeOrderAuditFailRecordCallable(const DescribeOrderAuditFailRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderAuditFailRecordOutcome()>>(
			[this, request]()
			{
			return this->describeOrderAuditFailRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOrderListOutcome CasClient::describeOrderList(const DescribeOrderListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderListOutcome(DescribeOrderListResult(outcome.result()));
	else
		return DescribeOrderListOutcome(outcome.error());
}

void CasClient::describeOrderListAsync(const DescribeOrderListRequest& request, const DescribeOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrderList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOrderListOutcomeCallable CasClient::describeOrderListCallable(const DescribeOrderListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderListOutcome()>>(
			[this, request]()
			{
			return this->describeOrderList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateOrderRevokeOutcome CasClient::createOrderRevoke(const CreateOrderRevokeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderRevokeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderRevokeOutcome(CreateOrderRevokeResult(outcome.result()));
	else
		return CreateOrderRevokeOutcome(outcome.error());
}

void CasClient::createOrderRevokeAsync(const CreateOrderRevokeRequest& request, const CreateOrderRevokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrderRevoke(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateOrderRevokeOutcomeCallable CasClient::createOrderRevokeCallable(const CreateOrderRevokeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderRevokeOutcome()>>(
			[this, request]()
			{
			return this->createOrderRevoke(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DeleteCertificateOutcome CasClient::deleteCertificate(const DeleteCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCertificateOutcome(DeleteCertificateResult(outcome.result()));
	else
		return DeleteCertificateOutcome(outcome.error());
}

void CasClient::deleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DeleteCertificateOutcomeCallable CasClient::deleteCertificateCallable(const DeleteCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCertificateOutcome()>>(
			[this, request]()
			{
			return this->deleteCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeLocationListOutcome CasClient::describeLocationList(const DescribeLocationListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLocationListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLocationListOutcome(DescribeLocationListResult(outcome.result()));
	else
		return DescribeLocationListOutcome(outcome.error());
}

void CasClient::describeLocationListAsync(const DescribeLocationListRequest& request, const DescribeLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLocationList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeLocationListOutcomeCallable CasClient::describeLocationListCallable(const DescribeLocationListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLocationListOutcome()>>(
			[this, request]()
			{
			return this->describeLocationList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeSignatureCapacityOutcome CasClient::describeSignatureCapacity(const DescribeSignatureCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSignatureCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSignatureCapacityOutcome(DescribeSignatureCapacityResult(outcome.result()));
	else
		return DescribeSignatureCapacityOutcome(outcome.error());
}

void CasClient::describeSignatureCapacityAsync(const DescribeSignatureCapacityRequest& request, const DescribeSignatureCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSignatureCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeSignatureCapacityOutcomeCallable CasClient::describeSignatureCapacityCallable(const DescribeSignatureCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSignatureCapacityOutcome()>>(
			[this, request]()
			{
			return this->describeSignatureCapacity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeSignatureTradeDetailOutcome CasClient::describeSignatureTradeDetail(const DescribeSignatureTradeDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSignatureTradeDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSignatureTradeDetailOutcome(DescribeSignatureTradeDetailResult(outcome.result()));
	else
		return DescribeSignatureTradeDetailOutcome(outcome.error());
}

void CasClient::describeSignatureTradeDetailAsync(const DescribeSignatureTradeDetailRequest& request, const DescribeSignatureTradeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSignatureTradeDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeSignatureTradeDetailOutcomeCallable CasClient::describeSignatureTradeDetailCallable(const DescribeSignatureTradeDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSignatureTradeDetailOutcome()>>(
			[this, request]()
			{
			return this->describeSignatureTradeDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::ListTagKeysOutcome CasClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void CasClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::ListTagKeysOutcomeCallable CasClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateSignatureOutcome CasClient::createSignature(const CreateSignatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSignatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSignatureOutcome(CreateSignatureResult(outcome.result()));
	else
		return CreateSignatureOutcome(outcome.error());
}

void CasClient::createSignatureAsync(const CreateSignatureRequest& request, const CreateSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSignature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateSignatureOutcomeCallable CasClient::createSignatureCallable(const CreateSignatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSignatureOutcome()>>(
			[this, request]()
			{
			return this->createSignature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeCertificateBrandListOutcome CasClient::describeCertificateBrandList(const DescribeCertificateBrandListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificateBrandListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificateBrandListOutcome(DescribeCertificateBrandListResult(outcome.result()));
	else
		return DescribeCertificateBrandListOutcome(outcome.error());
}

void CasClient::describeCertificateBrandListAsync(const DescribeCertificateBrandListRequest& request, const DescribeCertificateBrandListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificateBrandList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCertificateBrandListOutcomeCallable CasClient::describeCertificateBrandListCallable(const DescribeCertificateBrandListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificateBrandListOutcome()>>(
			[this, request]()
			{
			return this->describeCertificateBrandList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateAliDnsRecordIdOutcome CasClient::createAliDnsRecordId(const CreateAliDnsRecordIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAliDnsRecordIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAliDnsRecordIdOutcome(CreateAliDnsRecordIdResult(outcome.result()));
	else
		return CreateAliDnsRecordIdOutcome(outcome.error());
}

void CasClient::createAliDnsRecordIdAsync(const CreateAliDnsRecordIdRequest& request, const CreateAliDnsRecordIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAliDnsRecordId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateAliDnsRecordIdOutcomeCallable CasClient::createAliDnsRecordIdCallable(const CreateAliDnsRecordIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAliDnsRecordIdOutcome()>>(
			[this, request]()
			{
			return this->createAliDnsRecordId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateWebSignatureOutcome CasClient::createWebSignature(const CreateWebSignatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWebSignatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWebSignatureOutcome(CreateWebSignatureResult(outcome.result()));
	else
		return CreateWebSignatureOutcome(outcome.error());
}

void CasClient::createWebSignatureAsync(const CreateWebSignatureRequest& request, const CreateWebSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWebSignature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateWebSignatureOutcomeCallable CasClient::createWebSignatureCallable(const CreateWebSignatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWebSignatureOutcome()>>(
			[this, request]()
			{
			return this->createWebSignature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeCertificateDetailOutcome CasClient::describeCertificateDetail(const DescribeCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificateDetailOutcome(DescribeCertificateDetailResult(outcome.result()));
	else
		return DescribeCertificateDetailOutcome(outcome.error());
}

void CasClient::describeCertificateDetailAsync(const DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeCertificateDetailOutcomeCallable CasClient::describeCertificateDetailCallable(const DescribeCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeSignatureTradeListOutcome CasClient::describeSignatureTradeList(const DescribeSignatureTradeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSignatureTradeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSignatureTradeListOutcome(DescribeSignatureTradeListResult(outcome.result()));
	else
		return DescribeSignatureTradeListOutcome(outcome.error());
}

void CasClient::describeSignatureTradeListAsync(const DescribeSignatureTradeListRequest& request, const DescribeSignatureTradeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSignatureTradeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeSignatureTradeListOutcomeCallable CasClient::describeSignatureTradeListCallable(const DescribeSignatureTradeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSignatureTradeListOutcome()>>(
			[this, request]()
			{
			return this->describeSignatureTradeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateFilingSignatureDocumentOutcome CasClient::createFilingSignatureDocument(const CreateFilingSignatureDocumentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFilingSignatureDocumentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFilingSignatureDocumentOutcome(CreateFilingSignatureDocumentResult(outcome.result()));
	else
		return CreateFilingSignatureDocumentOutcome(outcome.error());
}

void CasClient::createFilingSignatureDocumentAsync(const CreateFilingSignatureDocumentRequest& request, const CreateFilingSignatureDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFilingSignatureDocument(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateFilingSignatureDocumentOutcomeCallable CasClient::createFilingSignatureDocumentCallable(const CreateFilingSignatureDocumentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFilingSignatureDocumentOutcome()>>(
			[this, request]()
			{
			return this->createFilingSignatureDocument(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOSSDownloadInfoOutcome CasClient::describeOSSDownloadInfo(const DescribeOSSDownloadInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOSSDownloadInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOSSDownloadInfoOutcome(DescribeOSSDownloadInfoResult(outcome.result()));
	else
		return DescribeOSSDownloadInfoOutcome(outcome.error());
}

void CasClient::describeOSSDownloadInfoAsync(const DescribeOSSDownloadInfoRequest& request, const DescribeOSSDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOSSDownloadInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOSSDownloadInfoOutcomeCallable CasClient::describeOSSDownloadInfoCallable(const DescribeOSSDownloadInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOSSDownloadInfoOutcome()>>(
			[this, request]()
			{
			return this->describeOSSDownloadInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateCooperationOrderOutcome CasClient::createCooperationOrder(const CreateCooperationOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCooperationOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCooperationOrderOutcome(CreateCooperationOrderResult(outcome.result()));
	else
		return CreateCooperationOrderOutcome(outcome.error());
}

void CasClient::createCooperationOrderAsync(const CreateCooperationOrderRequest& request, const CreateCooperationOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCooperationOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateCooperationOrderOutcomeCallable CasClient::createCooperationOrderCallable(const CreateCooperationOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCooperationOrderOutcome()>>(
			[this, request]()
			{
			return this->createCooperationOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DeleteOrderOutcome CasClient::deleteOrder(const DeleteOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOrderOutcome(DeleteOrderResult(outcome.result()));
	else
		return DeleteOrderOutcome(outcome.error());
}

void CasClient::deleteOrderAsync(const DeleteOrderRequest& request, const DeleteOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DeleteOrderOutcomeCallable CasClient::deleteOrderCallable(const DeleteOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOrderOutcome()>>(
			[this, request]()
			{
			return this->deleteOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateOrderAuditOutcome CasClient::createOrderAudit(const CreateOrderAuditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderAuditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderAuditOutcome(CreateOrderAuditResult(outcome.result()));
	else
		return CreateOrderAuditOutcome(outcome.error());
}

void CasClient::createOrderAuditAsync(const CreateOrderAuditRequest& request, const CreateOrderAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrderAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateOrderAuditOutcomeCallable CasClient::createOrderAuditCallable(const CreateOrderAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderAuditOutcome()>>(
			[this, request]()
			{
			return this->createOrderAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeHelpListOutcome CasClient::describeHelpList(const DescribeHelpListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHelpListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHelpListOutcome(DescribeHelpListResult(outcome.result()));
	else
		return DescribeHelpListOutcome(outcome.error());
}

void CasClient::describeHelpListAsync(const DescribeHelpListRequest& request, const DescribeHelpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHelpList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeHelpListOutcomeCallable CasClient::describeHelpListCallable(const DescribeHelpListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHelpListOutcome()>>(
			[this, request]()
			{
			return this->describeHelpList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeDeploymentDetailOutcome CasClient::describeDeploymentDetail(const DescribeDeploymentDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeploymentDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeploymentDetailOutcome(DescribeDeploymentDetailResult(outcome.result()));
	else
		return DescribeDeploymentDetailOutcome(outcome.error());
}

void CasClient::describeDeploymentDetailAsync(const DescribeDeploymentDetailRequest& request, const DescribeDeploymentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeploymentDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeDeploymentDetailOutcomeCallable CasClient::describeDeploymentDetailCallable(const DescribeDeploymentDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeploymentDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDeploymentDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeDomainVerifyInfoOutcome CasClient::describeDomainVerifyInfo(const DescribeDomainVerifyInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainVerifyInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainVerifyInfoOutcome(DescribeDomainVerifyInfoResult(outcome.result()));
	else
		return DescribeDomainVerifyInfoOutcome(outcome.error());
}

void CasClient::describeDomainVerifyInfoAsync(const DescribeDomainVerifyInfoRequest& request, const DescribeDomainVerifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainVerifyInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeDomainVerifyInfoOutcomeCallable CasClient::describeDomainVerifyInfoCallable(const DescribeDomainVerifyInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainVerifyInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDomainVerifyInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::TagResourcesOutcome CasClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void CasClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::TagResourcesOutcomeCallable CasClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOrderDetailOutcome CasClient::describeOrderDetail(const DescribeOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderDetailOutcome(DescribeOrderDetailResult(outcome.result()));
	else
		return DescribeOrderDetailOutcome(outcome.error());
}

void CasClient::describeOrderDetailAsync(const DescribeOrderDetailRequest& request, const DescribeOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOrderDetailOutcomeCallable CasClient::describeOrderDetailCallable(const DescribeOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->describeOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeOSSUploadInfoOutcome CasClient::describeOSSUploadInfo(const DescribeOSSUploadInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOSSUploadInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOSSUploadInfoOutcome(DescribeOSSUploadInfoResult(outcome.result()));
	else
		return DescribeOSSUploadInfoOutcome(outcome.error());
}

void CasClient::describeOSSUploadInfoAsync(const DescribeOSSUploadInfoRequest& request, const DescribeOSSUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOSSUploadInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeOSSUploadInfoOutcomeCallable CasClient::describeOSSUploadInfoCallable(const DescribeOSSUploadInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOSSUploadInfoOutcome()>>(
			[this, request]()
			{
			return this->describeOSSUploadInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateOrderRefundRecordOutcome CasClient::createOrderRefundRecord(const CreateOrderRefundRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrderRefundRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrderRefundRecordOutcome(CreateOrderRefundRecordResult(outcome.result()));
	else
		return CreateOrderRefundRecordOutcome(outcome.error());
}

void CasClient::createOrderRefundRecordAsync(const CreateOrderRefundRecordRequest& request, const CreateOrderRefundRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrderRefundRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateOrderRefundRecordOutcomeCallable CasClient::createOrderRefundRecordCallable(const CreateOrderRefundRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrderRefundRecordOutcome()>>(
			[this, request]()
			{
			return this->createOrderRefundRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeDeploymentProductOutcome CasClient::describeDeploymentProduct(const DescribeDeploymentProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeploymentProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeploymentProductOutcome(DescribeDeploymentProductResult(outcome.result()));
	else
		return DescribeDeploymentProductOutcome(outcome.error());
}

void CasClient::describeDeploymentProductAsync(const DescribeDeploymentProductRequest& request, const DescribeDeploymentProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeploymentProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeDeploymentProductOutcomeCallable CasClient::describeDeploymentProductCallable(const DescribeDeploymentProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeploymentProductOutcome()>>(
			[this, request]()
			{
			return this->describeDeploymentProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::DescribeDeploymentDomainListOutcome CasClient::describeDeploymentDomainList(const DescribeDeploymentDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeploymentDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeploymentDomainListOutcome(DescribeDeploymentDomainListResult(outcome.result()));
	else
		return DescribeDeploymentDomainListOutcome(outcome.error());
}

void CasClient::describeDeploymentDomainListAsync(const DescribeDeploymentDomainListRequest& request, const DescribeDeploymentDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeploymentDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::DescribeDeploymentDomainListOutcomeCallable CasClient::describeDeploymentDomainListCallable(const DescribeDeploymentDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeploymentDomainListOutcome()>>(
			[this, request]()
			{
			return this->describeDeploymentDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CasClient::CreateCertificateNameOutcome CasClient::createCertificateName(const CreateCertificateNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCertificateNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCertificateNameOutcome(CreateCertificateNameResult(outcome.result()));
	else
		return CreateCertificateNameOutcome(outcome.error());
}

void CasClient::createCertificateNameAsync(const CreateCertificateNameRequest& request, const CreateCertificateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCertificateName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CasClient::CreateCertificateNameOutcomeCallable CasClient::createCertificateNameCallable(const CreateCertificateNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCertificateNameOutcome()>>(
			[this, request]()
			{
			return this->createCertificateName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

