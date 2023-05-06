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

#include <alibabacloud/alinlp/AlinlpClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Alinlp;
using namespace AlibabaCloud::Alinlp::Model;

namespace
{
	const std::string SERVICE_NAME = "alinlp";
}

AlinlpClient::AlinlpClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alinlp");
}

AlinlpClient::AlinlpClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alinlp");
}

AlinlpClient::AlinlpClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alinlp");
}

AlinlpClient::~AlinlpClient()
{}

AlinlpClient::ADClockOutcome AlinlpClient::aDClock(const ADClockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ADClockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ADClockOutcome(ADClockResult(outcome.result()));
	else
		return ADClockOutcome(outcome.error());
}

void AlinlpClient::aDClockAsync(const ADClockRequest& request, const ADClockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aDClock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::ADClockOutcomeCallable AlinlpClient::aDClockCallable(const ADClockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ADClockOutcome()>>(
			[this, request]()
			{
			return this->aDClock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::ADMMUOutcome AlinlpClient::aDMMU(const ADMMURequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ADMMUOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ADMMUOutcome(ADMMUResult(outcome.result()));
	else
		return ADMMUOutcome(outcome.error());
}

void AlinlpClient::aDMMUAsync(const ADMMURequest& request, const ADMMUAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aDMMU(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::ADMMUOutcomeCallable AlinlpClient::aDMMUCallable(const ADMMURequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ADMMUOutcome()>>(
			[this, request]()
			{
			return this->aDMMU(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::ADMiniCogOutcome AlinlpClient::aDMiniCog(const ADMiniCogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ADMiniCogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ADMiniCogOutcome(ADMiniCogResult(outcome.result()));
	else
		return ADMiniCogOutcome(outcome.error());
}

void AlinlpClient::aDMiniCogAsync(const ADMiniCogRequest& request, const ADMiniCogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aDMiniCog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::ADMiniCogOutcomeCallable AlinlpClient::aDMiniCogCallable(const ADMiniCogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ADMiniCogOutcome()>>(
			[this, request]()
			{
			return this->aDMiniCog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::ADMiniCogResultOutcome AlinlpClient::aDMiniCogResult(const ADMiniCogResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ADMiniCogResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ADMiniCogResultOutcome(ADMiniCogResultResult(outcome.result()));
	else
		return ADMiniCogResultOutcome(outcome.error());
}

void AlinlpClient::aDMiniCogResultAsync(const ADMiniCogResultRequest& request, const ADMiniCogResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aDMiniCogResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::ADMiniCogResultOutcomeCallable AlinlpClient::aDMiniCogResultCallable(const ADMiniCogResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ADMiniCogResultOutcome()>>(
			[this, request]()
			{
			return this->aDMiniCogResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetBrandChEcomOutcome AlinlpClient::getBrandChEcom(const GetBrandChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBrandChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBrandChEcomOutcome(GetBrandChEcomResult(outcome.result()));
	else
		return GetBrandChEcomOutcome(outcome.error());
}

void AlinlpClient::getBrandChEcomAsync(const GetBrandChEcomRequest& request, const GetBrandChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBrandChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetBrandChEcomOutcomeCallable AlinlpClient::getBrandChEcomCallable(const GetBrandChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBrandChEcomOutcome()>>(
			[this, request]()
			{
			return this->getBrandChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetCateChEcomOutcome AlinlpClient::getCateChEcom(const GetCateChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCateChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCateChEcomOutcome(GetCateChEcomResult(outcome.result()));
	else
		return GetCateChEcomOutcome(outcome.error());
}

void AlinlpClient::getCateChEcomAsync(const GetCateChEcomRequest& request, const GetCateChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCateChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetCateChEcomOutcomeCallable AlinlpClient::getCateChEcomCallable(const GetCateChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCateChEcomOutcome()>>(
			[this, request]()
			{
			return this->getCateChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetCheckDuplicationChMedicalOutcome AlinlpClient::getCheckDuplicationChMedical(const GetCheckDuplicationChMedicalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckDuplicationChMedicalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckDuplicationChMedicalOutcome(GetCheckDuplicationChMedicalResult(outcome.result()));
	else
		return GetCheckDuplicationChMedicalOutcome(outcome.error());
}

void AlinlpClient::getCheckDuplicationChMedicalAsync(const GetCheckDuplicationChMedicalRequest& request, const GetCheckDuplicationChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckDuplicationChMedical(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetCheckDuplicationChMedicalOutcomeCallable AlinlpClient::getCheckDuplicationChMedicalCallable(const GetCheckDuplicationChMedicalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckDuplicationChMedicalOutcome()>>(
			[this, request]()
			{
			return this->getCheckDuplicationChMedical(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetDiagnosisChMedicalOutcome AlinlpClient::getDiagnosisChMedical(const GetDiagnosisChMedicalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDiagnosisChMedicalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDiagnosisChMedicalOutcome(GetDiagnosisChMedicalResult(outcome.result()));
	else
		return GetDiagnosisChMedicalOutcome(outcome.error());
}

void AlinlpClient::getDiagnosisChMedicalAsync(const GetDiagnosisChMedicalRequest& request, const GetDiagnosisChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDiagnosisChMedical(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetDiagnosisChMedicalOutcomeCallable AlinlpClient::getDiagnosisChMedicalCallable(const GetDiagnosisChMedicalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDiagnosisChMedicalOutcome()>>(
			[this, request]()
			{
			return this->getDiagnosisChMedical(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetDpChEcomOutcome AlinlpClient::getDpChEcom(const GetDpChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDpChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDpChEcomOutcome(GetDpChEcomResult(outcome.result()));
	else
		return GetDpChEcomOutcome(outcome.error());
}

void AlinlpClient::getDpChEcomAsync(const GetDpChEcomRequest& request, const GetDpChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDpChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetDpChEcomOutcomeCallable AlinlpClient::getDpChEcomCallable(const GetDpChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDpChEcomOutcome()>>(
			[this, request]()
			{
			return this->getDpChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetDpChGeneralCTBOutcome AlinlpClient::getDpChGeneralCTB(const GetDpChGeneralCTBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDpChGeneralCTBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDpChGeneralCTBOutcome(GetDpChGeneralCTBResult(outcome.result()));
	else
		return GetDpChGeneralCTBOutcome(outcome.error());
}

void AlinlpClient::getDpChGeneralCTBAsync(const GetDpChGeneralCTBRequest& request, const GetDpChGeneralCTBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDpChGeneralCTB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetDpChGeneralCTBOutcomeCallable AlinlpClient::getDpChGeneralCTBCallable(const GetDpChGeneralCTBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDpChGeneralCTBOutcome()>>(
			[this, request]()
			{
			return this->getDpChGeneralCTB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetDpChGeneralStanfordOutcome AlinlpClient::getDpChGeneralStanford(const GetDpChGeneralStanfordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDpChGeneralStanfordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDpChGeneralStanfordOutcome(GetDpChGeneralStanfordResult(outcome.result()));
	else
		return GetDpChGeneralStanfordOutcome(outcome.error());
}

void AlinlpClient::getDpChGeneralStanfordAsync(const GetDpChGeneralStanfordRequest& request, const GetDpChGeneralStanfordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDpChGeneralStanford(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetDpChGeneralStanfordOutcomeCallable AlinlpClient::getDpChGeneralStanfordCallable(const GetDpChGeneralStanfordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDpChGeneralStanfordOutcome()>>(
			[this, request]()
			{
			return this->getDpChGeneralStanford(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetEcChGeneralOutcome AlinlpClient::getEcChGeneral(const GetEcChGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEcChGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEcChGeneralOutcome(GetEcChGeneralResult(outcome.result()));
	else
		return GetEcChGeneralOutcome(outcome.error());
}

void AlinlpClient::getEcChGeneralAsync(const GetEcChGeneralRequest& request, const GetEcChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEcChGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetEcChGeneralOutcomeCallable AlinlpClient::getEcChGeneralCallable(const GetEcChGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEcChGeneralOutcome()>>(
			[this, request]()
			{
			return this->getEcChGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetEcEnGeneralOutcome AlinlpClient::getEcEnGeneral(const GetEcEnGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEcEnGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEcEnGeneralOutcome(GetEcEnGeneralResult(outcome.result()));
	else
		return GetEcEnGeneralOutcome(outcome.error());
}

void AlinlpClient::getEcEnGeneralAsync(const GetEcEnGeneralRequest& request, const GetEcEnGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEcEnGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetEcEnGeneralOutcomeCallable AlinlpClient::getEcEnGeneralCallable(const GetEcEnGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEcEnGeneralOutcome()>>(
			[this, request]()
			{
			return this->getEcEnGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetEmbeddingOutcome AlinlpClient::getEmbedding(const GetEmbeddingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEmbeddingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEmbeddingOutcome(GetEmbeddingResult(outcome.result()));
	else
		return GetEmbeddingOutcome(outcome.error());
}

void AlinlpClient::getEmbeddingAsync(const GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEmbedding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetEmbeddingOutcomeCallable AlinlpClient::getEmbeddingCallable(const GetEmbeddingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEmbeddingOutcome()>>(
			[this, request]()
			{
			return this->getEmbedding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetItemPubChEcomOutcome AlinlpClient::getItemPubChEcom(const GetItemPubChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetItemPubChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetItemPubChEcomOutcome(GetItemPubChEcomResult(outcome.result()));
	else
		return GetItemPubChEcomOutcome(outcome.error());
}

void AlinlpClient::getItemPubChEcomAsync(const GetItemPubChEcomRequest& request, const GetItemPubChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getItemPubChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetItemPubChEcomOutcomeCallable AlinlpClient::getItemPubChEcomCallable(const GetItemPubChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetItemPubChEcomOutcome()>>(
			[this, request]()
			{
			return this->getItemPubChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetKeywordChEcomOutcome AlinlpClient::getKeywordChEcom(const GetKeywordChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetKeywordChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetKeywordChEcomOutcome(GetKeywordChEcomResult(outcome.result()));
	else
		return GetKeywordChEcomOutcome(outcome.error());
}

void AlinlpClient::getKeywordChEcomAsync(const GetKeywordChEcomRequest& request, const GetKeywordChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getKeywordChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetKeywordChEcomOutcomeCallable AlinlpClient::getKeywordChEcomCallable(const GetKeywordChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetKeywordChEcomOutcome()>>(
			[this, request]()
			{
			return this->getKeywordChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetKeywordEnEcomOutcome AlinlpClient::getKeywordEnEcom(const GetKeywordEnEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetKeywordEnEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetKeywordEnEcomOutcome(GetKeywordEnEcomResult(outcome.result()));
	else
		return GetKeywordEnEcomOutcome(outcome.error());
}

void AlinlpClient::getKeywordEnEcomAsync(const GetKeywordEnEcomRequest& request, const GetKeywordEnEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getKeywordEnEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetKeywordEnEcomOutcomeCallable AlinlpClient::getKeywordEnEcomCallable(const GetKeywordEnEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetKeywordEnEcomOutcome()>>(
			[this, request]()
			{
			return this->getKeywordEnEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetMedicineChMedicalOutcome AlinlpClient::getMedicineChMedical(const GetMedicineChMedicalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMedicineChMedicalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMedicineChMedicalOutcome(GetMedicineChMedicalResult(outcome.result()));
	else
		return GetMedicineChMedicalOutcome(outcome.error());
}

void AlinlpClient::getMedicineChMedicalAsync(const GetMedicineChMedicalRequest& request, const GetMedicineChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMedicineChMedical(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetMedicineChMedicalOutcomeCallable AlinlpClient::getMedicineChMedicalCallable(const GetMedicineChMedicalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMedicineChMedicalOutcome()>>(
			[this, request]()
			{
			return this->getMedicineChMedical(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetNerChEcomOutcome AlinlpClient::getNerChEcom(const GetNerChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNerChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNerChEcomOutcome(GetNerChEcomResult(outcome.result()));
	else
		return GetNerChEcomOutcome(outcome.error());
}

void AlinlpClient::getNerChEcomAsync(const GetNerChEcomRequest& request, const GetNerChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNerChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetNerChEcomOutcomeCallable AlinlpClient::getNerChEcomCallable(const GetNerChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNerChEcomOutcome()>>(
			[this, request]()
			{
			return this->getNerChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetNerChMedicalOutcome AlinlpClient::getNerChMedical(const GetNerChMedicalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNerChMedicalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNerChMedicalOutcome(GetNerChMedicalResult(outcome.result()));
	else
		return GetNerChMedicalOutcome(outcome.error());
}

void AlinlpClient::getNerChMedicalAsync(const GetNerChMedicalRequest& request, const GetNerChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNerChMedical(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetNerChMedicalOutcomeCallable AlinlpClient::getNerChMedicalCallable(const GetNerChMedicalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNerChMedicalOutcome()>>(
			[this, request]()
			{
			return this->getNerChMedical(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetNerCustomizedChEcomOutcome AlinlpClient::getNerCustomizedChEcom(const GetNerCustomizedChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNerCustomizedChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNerCustomizedChEcomOutcome(GetNerCustomizedChEcomResult(outcome.result()));
	else
		return GetNerCustomizedChEcomOutcome(outcome.error());
}

void AlinlpClient::getNerCustomizedChEcomAsync(const GetNerCustomizedChEcomRequest& request, const GetNerCustomizedChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNerCustomizedChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetNerCustomizedChEcomOutcomeCallable AlinlpClient::getNerCustomizedChEcomCallable(const GetNerCustomizedChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNerCustomizedChEcomOutcome()>>(
			[this, request]()
			{
			return this->getNerCustomizedChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetNerCustomizedSeaEcomOutcome AlinlpClient::getNerCustomizedSeaEcom(const GetNerCustomizedSeaEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNerCustomizedSeaEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNerCustomizedSeaEcomOutcome(GetNerCustomizedSeaEcomResult(outcome.result()));
	else
		return GetNerCustomizedSeaEcomOutcome(outcome.error());
}

void AlinlpClient::getNerCustomizedSeaEcomAsync(const GetNerCustomizedSeaEcomRequest& request, const GetNerCustomizedSeaEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNerCustomizedSeaEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetNerCustomizedSeaEcomOutcomeCallable AlinlpClient::getNerCustomizedSeaEcomCallable(const GetNerCustomizedSeaEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNerCustomizedSeaEcomOutcome()>>(
			[this, request]()
			{
			return this->getNerCustomizedSeaEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetOpenNLUOutcome AlinlpClient::getOpenNLU(const GetOpenNLURequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpenNLUOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpenNLUOutcome(GetOpenNLUResult(outcome.result()));
	else
		return GetOpenNLUOutcome(outcome.error());
}

void AlinlpClient::getOpenNLUAsync(const GetOpenNLURequest& request, const GetOpenNLUAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpenNLU(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetOpenNLUOutcomeCallable AlinlpClient::getOpenNLUCallable(const GetOpenNLURequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpenNLUOutcome()>>(
			[this, request]()
			{
			return this->getOpenNLU(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetOpenNLUHighRecallOutcome AlinlpClient::getOpenNLUHighRecall(const GetOpenNLUHighRecallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpenNLUHighRecallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpenNLUHighRecallOutcome(GetOpenNLUHighRecallResult(outcome.result()));
	else
		return GetOpenNLUHighRecallOutcome(outcome.error());
}

void AlinlpClient::getOpenNLUHighRecallAsync(const GetOpenNLUHighRecallRequest& request, const GetOpenNLUHighRecallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpenNLUHighRecall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetOpenNLUHighRecallOutcomeCallable AlinlpClient::getOpenNLUHighRecallCallable(const GetOpenNLUHighRecallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpenNLUHighRecallOutcome()>>(
			[this, request]()
			{
			return this->getOpenNLUHighRecall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetOperationChMedicalOutcome AlinlpClient::getOperationChMedical(const GetOperationChMedicalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOperationChMedicalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOperationChMedicalOutcome(GetOperationChMedicalResult(outcome.result()));
	else
		return GetOperationChMedicalOutcome(outcome.error());
}

void AlinlpClient::getOperationChMedicalAsync(const GetOperationChMedicalRequest& request, const GetOperationChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOperationChMedical(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetOperationChMedicalOutcomeCallable AlinlpClient::getOperationChMedicalCallable(const GetOperationChMedicalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOperationChMedicalOutcome()>>(
			[this, request]()
			{
			return this->getOperationChMedical(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetPosChEcomOutcome AlinlpClient::getPosChEcom(const GetPosChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPosChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPosChEcomOutcome(GetPosChEcomResult(outcome.result()));
	else
		return GetPosChEcomOutcome(outcome.error());
}

void AlinlpClient::getPosChEcomAsync(const GetPosChEcomRequest& request, const GetPosChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPosChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetPosChEcomOutcomeCallable AlinlpClient::getPosChEcomCallable(const GetPosChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPosChEcomOutcome()>>(
			[this, request]()
			{
			return this->getPosChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetPosChGeneralOutcome AlinlpClient::getPosChGeneral(const GetPosChGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPosChGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPosChGeneralOutcome(GetPosChGeneralResult(outcome.result()));
	else
		return GetPosChGeneralOutcome(outcome.error());
}

void AlinlpClient::getPosChGeneralAsync(const GetPosChGeneralRequest& request, const GetPosChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPosChGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetPosChGeneralOutcomeCallable AlinlpClient::getPosChGeneralCallable(const GetPosChGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPosChGeneralOutcome()>>(
			[this, request]()
			{
			return this->getPosChGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetPriceChEcomOutcome AlinlpClient::getPriceChEcom(const GetPriceChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPriceChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPriceChEcomOutcome(GetPriceChEcomResult(outcome.result()));
	else
		return GetPriceChEcomOutcome(outcome.error());
}

void AlinlpClient::getPriceChEcomAsync(const GetPriceChEcomRequest& request, const GetPriceChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPriceChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetPriceChEcomOutcomeCallable AlinlpClient::getPriceChEcomCallable(const GetPriceChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPriceChEcomOutcome()>>(
			[this, request]()
			{
			return this->getPriceChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetSSETestOutcome AlinlpClient::getSSETest(const GetSSETestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSSETestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSSETestOutcome(GetSSETestResult(outcome.result()));
	else
		return GetSSETestOutcome(outcome.error());
}

void AlinlpClient::getSSETestAsync(const GetSSETestRequest& request, const GetSSETestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSSETest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetSSETestOutcomeCallable AlinlpClient::getSSETestCallable(const GetSSETestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSSETestOutcome()>>(
			[this, request]()
			{
			return this->getSSETest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetSaChGeneralOutcome AlinlpClient::getSaChGeneral(const GetSaChGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSaChGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSaChGeneralOutcome(GetSaChGeneralResult(outcome.result()));
	else
		return GetSaChGeneralOutcome(outcome.error());
}

void AlinlpClient::getSaChGeneralAsync(const GetSaChGeneralRequest& request, const GetSaChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSaChGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetSaChGeneralOutcomeCallable AlinlpClient::getSaChGeneralCallable(const GetSaChGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSaChGeneralOutcome()>>(
			[this, request]()
			{
			return this->getSaChGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetSaSeaEcomOutcome AlinlpClient::getSaSeaEcom(const GetSaSeaEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSaSeaEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSaSeaEcomOutcome(GetSaSeaEcomResult(outcome.result()));
	else
		return GetSaSeaEcomOutcome(outcome.error());
}

void AlinlpClient::getSaSeaEcomAsync(const GetSaSeaEcomRequest& request, const GetSaSeaEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSaSeaEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetSaSeaEcomOutcomeCallable AlinlpClient::getSaSeaEcomCallable(const GetSaSeaEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSaSeaEcomOutcome()>>(
			[this, request]()
			{
			return this->getSaSeaEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetSimilarityChMedicalOutcome AlinlpClient::getSimilarityChMedical(const GetSimilarityChMedicalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSimilarityChMedicalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSimilarityChMedicalOutcome(GetSimilarityChMedicalResult(outcome.result()));
	else
		return GetSimilarityChMedicalOutcome(outcome.error());
}

void AlinlpClient::getSimilarityChMedicalAsync(const GetSimilarityChMedicalRequest& request, const GetSimilarityChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSimilarityChMedical(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetSimilarityChMedicalOutcomeCallable AlinlpClient::getSimilarityChMedicalCallable(const GetSimilarityChMedicalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSimilarityChMedicalOutcome()>>(
			[this, request]()
			{
			return this->getSimilarityChMedical(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetSummaryChEcomOutcome AlinlpClient::getSummaryChEcom(const GetSummaryChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSummaryChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSummaryChEcomOutcome(GetSummaryChEcomResult(outcome.result()));
	else
		return GetSummaryChEcomOutcome(outcome.error());
}

void AlinlpClient::getSummaryChEcomAsync(const GetSummaryChEcomRequest& request, const GetSummaryChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSummaryChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetSummaryChEcomOutcomeCallable AlinlpClient::getSummaryChEcomCallable(const GetSummaryChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSummaryChEcomOutcome()>>(
			[this, request]()
			{
			return this->getSummaryChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetTableQAServiceInfoByIdOutcome AlinlpClient::getTableQAServiceInfoById(const GetTableQAServiceInfoByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableQAServiceInfoByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableQAServiceInfoByIdOutcome(GetTableQAServiceInfoByIdResult(outcome.result()));
	else
		return GetTableQAServiceInfoByIdOutcome(outcome.error());
}

void AlinlpClient::getTableQAServiceInfoByIdAsync(const GetTableQAServiceInfoByIdRequest& request, const GetTableQAServiceInfoByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTableQAServiceInfoById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetTableQAServiceInfoByIdOutcomeCallable AlinlpClient::getTableQAServiceInfoByIdCallable(const GetTableQAServiceInfoByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableQAServiceInfoByIdOutcome()>>(
			[this, request]()
			{
			return this->getTableQAServiceInfoById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetTcChEcomOutcome AlinlpClient::getTcChEcom(const GetTcChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTcChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTcChEcomOutcome(GetTcChEcomResult(outcome.result()));
	else
		return GetTcChEcomOutcome(outcome.error());
}

void AlinlpClient::getTcChEcomAsync(const GetTcChEcomRequest& request, const GetTcChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTcChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetTcChEcomOutcomeCallable AlinlpClient::getTcChEcomCallable(const GetTcChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTcChEcomOutcome()>>(
			[this, request]()
			{
			return this->getTcChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetTcChGeneralOutcome AlinlpClient::getTcChGeneral(const GetTcChGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTcChGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTcChGeneralOutcome(GetTcChGeneralResult(outcome.result()));
	else
		return GetTcChGeneralOutcome(outcome.error());
}

void AlinlpClient::getTcChGeneralAsync(const GetTcChGeneralRequest& request, const GetTcChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTcChGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetTcChGeneralOutcomeCallable AlinlpClient::getTcChGeneralCallable(const GetTcChGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTcChGeneralOutcome()>>(
			[this, request]()
			{
			return this->getTcChGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetTsChEcomOutcome AlinlpClient::getTsChEcom(const GetTsChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTsChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTsChEcomOutcome(GetTsChEcomResult(outcome.result()));
	else
		return GetTsChEcomOutcome(outcome.error());
}

void AlinlpClient::getTsChEcomAsync(const GetTsChEcomRequest& request, const GetTsChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTsChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetTsChEcomOutcomeCallable AlinlpClient::getTsChEcomCallable(const GetTsChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTsChEcomOutcome()>>(
			[this, request]()
			{
			return this->getTsChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetUserUploadSignOutcome AlinlpClient::getUserUploadSign(const GetUserUploadSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserUploadSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserUploadSignOutcome(GetUserUploadSignResult(outcome.result()));
	else
		return GetUserUploadSignOutcome(outcome.error());
}

void AlinlpClient::getUserUploadSignAsync(const GetUserUploadSignRequest& request, const GetUserUploadSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserUploadSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetUserUploadSignOutcomeCallable AlinlpClient::getUserUploadSignCallable(const GetUserUploadSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserUploadSignOutcome()>>(
			[this, request]()
			{
			return this->getUserUploadSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWeChCommentOutcome AlinlpClient::getWeChComment(const GetWeChCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWeChCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWeChCommentOutcome(GetWeChCommentResult(outcome.result()));
	else
		return GetWeChCommentOutcome(outcome.error());
}

void AlinlpClient::getWeChCommentAsync(const GetWeChCommentRequest& request, const GetWeChCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWeChComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWeChCommentOutcomeCallable AlinlpClient::getWeChCommentCallable(const GetWeChCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWeChCommentOutcome()>>(
			[this, request]()
			{
			return this->getWeChComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWeChEcomOutcome AlinlpClient::getWeChEcom(const GetWeChEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWeChEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWeChEcomOutcome(GetWeChEcomResult(outcome.result()));
	else
		return GetWeChEcomOutcome(outcome.error());
}

void AlinlpClient::getWeChEcomAsync(const GetWeChEcomRequest& request, const GetWeChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWeChEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWeChEcomOutcomeCallable AlinlpClient::getWeChEcomCallable(const GetWeChEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWeChEcomOutcome()>>(
			[this, request]()
			{
			return this->getWeChEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWeChEntertainmentOutcome AlinlpClient::getWeChEntertainment(const GetWeChEntertainmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWeChEntertainmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWeChEntertainmentOutcome(GetWeChEntertainmentResult(outcome.result()));
	else
		return GetWeChEntertainmentOutcome(outcome.error());
}

void AlinlpClient::getWeChEntertainmentAsync(const GetWeChEntertainmentRequest& request, const GetWeChEntertainmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWeChEntertainment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWeChEntertainmentOutcomeCallable AlinlpClient::getWeChEntertainmentCallable(const GetWeChEntertainmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWeChEntertainmentOutcome()>>(
			[this, request]()
			{
			return this->getWeChEntertainment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWeChGeneralOutcome AlinlpClient::getWeChGeneral(const GetWeChGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWeChGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWeChGeneralOutcome(GetWeChGeneralResult(outcome.result()));
	else
		return GetWeChGeneralOutcome(outcome.error());
}

void AlinlpClient::getWeChGeneralAsync(const GetWeChGeneralRequest& request, const GetWeChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWeChGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWeChGeneralOutcomeCallable AlinlpClient::getWeChGeneralCallable(const GetWeChGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWeChGeneralOutcome()>>(
			[this, request]()
			{
			return this->getWeChGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWeChSearchOutcome AlinlpClient::getWeChSearch(const GetWeChSearchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWeChSearchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWeChSearchOutcome(GetWeChSearchResult(outcome.result()));
	else
		return GetWeChSearchOutcome(outcome.error());
}

void AlinlpClient::getWeChSearchAsync(const GetWeChSearchRequest& request, const GetWeChSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWeChSearch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWeChSearchOutcomeCallable AlinlpClient::getWeChSearchCallable(const GetWeChSearchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWeChSearchOutcome()>>(
			[this, request]()
			{
			return this->getWeChSearch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsChGeneralOutcome AlinlpClient::getWsChGeneral(const GetWsChGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsChGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsChGeneralOutcome(GetWsChGeneralResult(outcome.result()));
	else
		return GetWsChGeneralOutcome(outcome.error());
}

void AlinlpClient::getWsChGeneralAsync(const GetWsChGeneralRequest& request, const GetWsChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsChGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsChGeneralOutcomeCallable AlinlpClient::getWsChGeneralCallable(const GetWsChGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsChGeneralOutcome()>>(
			[this, request]()
			{
			return this->getWsChGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsCustomizedChEcomCommentOutcome AlinlpClient::getWsCustomizedChEcomComment(const GetWsCustomizedChEcomCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsCustomizedChEcomCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsCustomizedChEcomCommentOutcome(GetWsCustomizedChEcomCommentResult(outcome.result()));
	else
		return GetWsCustomizedChEcomCommentOutcome(outcome.error());
}

void AlinlpClient::getWsCustomizedChEcomCommentAsync(const GetWsCustomizedChEcomCommentRequest& request, const GetWsCustomizedChEcomCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsCustomizedChEcomComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsCustomizedChEcomCommentOutcomeCallable AlinlpClient::getWsCustomizedChEcomCommentCallable(const GetWsCustomizedChEcomCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsCustomizedChEcomCommentOutcome()>>(
			[this, request]()
			{
			return this->getWsCustomizedChEcomComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsCustomizedChEcomContentOutcome AlinlpClient::getWsCustomizedChEcomContent(const GetWsCustomizedChEcomContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsCustomizedChEcomContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsCustomizedChEcomContentOutcome(GetWsCustomizedChEcomContentResult(outcome.result()));
	else
		return GetWsCustomizedChEcomContentOutcome(outcome.error());
}

void AlinlpClient::getWsCustomizedChEcomContentAsync(const GetWsCustomizedChEcomContentRequest& request, const GetWsCustomizedChEcomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsCustomizedChEcomContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsCustomizedChEcomContentOutcomeCallable AlinlpClient::getWsCustomizedChEcomContentCallable(const GetWsCustomizedChEcomContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsCustomizedChEcomContentOutcome()>>(
			[this, request]()
			{
			return this->getWsCustomizedChEcomContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsCustomizedChEcomTitleOutcome AlinlpClient::getWsCustomizedChEcomTitle(const GetWsCustomizedChEcomTitleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsCustomizedChEcomTitleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsCustomizedChEcomTitleOutcome(GetWsCustomizedChEcomTitleResult(outcome.result()));
	else
		return GetWsCustomizedChEcomTitleOutcome(outcome.error());
}

void AlinlpClient::getWsCustomizedChEcomTitleAsync(const GetWsCustomizedChEcomTitleRequest& request, const GetWsCustomizedChEcomTitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsCustomizedChEcomTitle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsCustomizedChEcomTitleOutcomeCallable AlinlpClient::getWsCustomizedChEcomTitleCallable(const GetWsCustomizedChEcomTitleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsCustomizedChEcomTitleOutcome()>>(
			[this, request]()
			{
			return this->getWsCustomizedChEcomTitle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsCustomizedChEntertainmentOutcome AlinlpClient::getWsCustomizedChEntertainment(const GetWsCustomizedChEntertainmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsCustomizedChEntertainmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsCustomizedChEntertainmentOutcome(GetWsCustomizedChEntertainmentResult(outcome.result()));
	else
		return GetWsCustomizedChEntertainmentOutcome(outcome.error());
}

void AlinlpClient::getWsCustomizedChEntertainmentAsync(const GetWsCustomizedChEntertainmentRequest& request, const GetWsCustomizedChEntertainmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsCustomizedChEntertainment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsCustomizedChEntertainmentOutcomeCallable AlinlpClient::getWsCustomizedChEntertainmentCallable(const GetWsCustomizedChEntertainmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsCustomizedChEntertainmentOutcome()>>(
			[this, request]()
			{
			return this->getWsCustomizedChEntertainment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsCustomizedChGeneralOutcome AlinlpClient::getWsCustomizedChGeneral(const GetWsCustomizedChGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsCustomizedChGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsCustomizedChGeneralOutcome(GetWsCustomizedChGeneralResult(outcome.result()));
	else
		return GetWsCustomizedChGeneralOutcome(outcome.error());
}

void AlinlpClient::getWsCustomizedChGeneralAsync(const GetWsCustomizedChGeneralRequest& request, const GetWsCustomizedChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsCustomizedChGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsCustomizedChGeneralOutcomeCallable AlinlpClient::getWsCustomizedChGeneralCallable(const GetWsCustomizedChGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsCustomizedChGeneralOutcome()>>(
			[this, request]()
			{
			return this->getWsCustomizedChGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsCustomizedChO2OOutcome AlinlpClient::getWsCustomizedChO2O(const GetWsCustomizedChO2ORequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsCustomizedChO2OOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsCustomizedChO2OOutcome(GetWsCustomizedChO2OResult(outcome.result()));
	else
		return GetWsCustomizedChO2OOutcome(outcome.error());
}

void AlinlpClient::getWsCustomizedChO2OAsync(const GetWsCustomizedChO2ORequest& request, const GetWsCustomizedChO2OAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsCustomizedChO2O(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsCustomizedChO2OOutcomeCallable AlinlpClient::getWsCustomizedChO2OCallable(const GetWsCustomizedChO2ORequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsCustomizedChO2OOutcome()>>(
			[this, request]()
			{
			return this->getWsCustomizedChO2O(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsCustomizedSeaEcomOutcome AlinlpClient::getWsCustomizedSeaEcom(const GetWsCustomizedSeaEcomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsCustomizedSeaEcomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsCustomizedSeaEcomOutcome(GetWsCustomizedSeaEcomResult(outcome.result()));
	else
		return GetWsCustomizedSeaEcomOutcome(outcome.error());
}

void AlinlpClient::getWsCustomizedSeaEcomAsync(const GetWsCustomizedSeaEcomRequest& request, const GetWsCustomizedSeaEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsCustomizedSeaEcom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsCustomizedSeaEcomOutcomeCallable AlinlpClient::getWsCustomizedSeaEcomCallable(const GetWsCustomizedSeaEcomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsCustomizedSeaEcomOutcome()>>(
			[this, request]()
			{
			return this->getWsCustomizedSeaEcom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::GetWsCustomizedSeaGeneralOutcome AlinlpClient::getWsCustomizedSeaGeneral(const GetWsCustomizedSeaGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWsCustomizedSeaGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWsCustomizedSeaGeneralOutcome(GetWsCustomizedSeaGeneralResult(outcome.result()));
	else
		return GetWsCustomizedSeaGeneralOutcome(outcome.error());
}

void AlinlpClient::getWsCustomizedSeaGeneralAsync(const GetWsCustomizedSeaGeneralRequest& request, const GetWsCustomizedSeaGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWsCustomizedSeaGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::GetWsCustomizedSeaGeneralOutcomeCallable AlinlpClient::getWsCustomizedSeaGeneralCallable(const GetWsCustomizedSeaGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWsCustomizedSeaGeneralOutcome()>>(
			[this, request]()
			{
			return this->getWsCustomizedSeaGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::InsertCustomOutcome AlinlpClient::insertCustom(const InsertCustomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertCustomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertCustomOutcome(InsertCustomResult(outcome.result()));
	else
		return InsertCustomOutcome(outcome.error());
}

void AlinlpClient::insertCustomAsync(const InsertCustomRequest& request, const InsertCustomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertCustom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::InsertCustomOutcomeCallable AlinlpClient::insertCustomCallable(const InsertCustomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertCustomOutcome()>>(
			[this, request]()
			{
			return this->insertCustom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::OpenAlinlpServiceOutcome AlinlpClient::openAlinlpService(const OpenAlinlpServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenAlinlpServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenAlinlpServiceOutcome(OpenAlinlpServiceResult(outcome.result()));
	else
		return OpenAlinlpServiceOutcome(outcome.error());
}

void AlinlpClient::openAlinlpServiceAsync(const OpenAlinlpServiceRequest& request, const OpenAlinlpServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openAlinlpService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::OpenAlinlpServiceOutcomeCallable AlinlpClient::openAlinlpServiceCallable(const OpenAlinlpServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenAlinlpServiceOutcome()>>(
			[this, request]()
			{
			return this->openAlinlpService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::RequestTableQAOutcome AlinlpClient::requestTableQA(const RequestTableQARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RequestTableQAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RequestTableQAOutcome(RequestTableQAResult(outcome.result()));
	else
		return RequestTableQAOutcome(outcome.error());
}

void AlinlpClient::requestTableQAAsync(const RequestTableQARequest& request, const RequestTableQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, requestTableQA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::RequestTableQAOutcomeCallable AlinlpClient::requestTableQACallable(const RequestTableQARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RequestTableQAOutcome()>>(
			[this, request]()
			{
			return this->requestTableQA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlinlpClient::RequestTableQAOnlineOutcome AlinlpClient::requestTableQAOnline(const RequestTableQAOnlineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RequestTableQAOnlineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RequestTableQAOnlineOutcome(RequestTableQAOnlineResult(outcome.result()));
	else
		return RequestTableQAOnlineOutcome(outcome.error());
}

void AlinlpClient::requestTableQAOnlineAsync(const RequestTableQAOnlineRequest& request, const RequestTableQAOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, requestTableQAOnline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlinlpClient::RequestTableQAOnlineOutcomeCallable AlinlpClient::requestTableQAOnlineCallable(const RequestTableQAOnlineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RequestTableQAOnlineOutcome()>>(
			[this, request]()
			{
			return this->requestTableQAOnline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

