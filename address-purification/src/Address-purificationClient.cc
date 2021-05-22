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

#include <alibabacloud/address-purification/Address_purificationClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Address_purification;
using namespace AlibabaCloud::Address_purification::Model;

namespace
{
	const std::string SERVICE_NAME = "address-purification";
}

Address_purificationClient::Address_purificationClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "addrp");
}

Address_purificationClient::Address_purificationClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "addrp");
}

Address_purificationClient::Address_purificationClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "addrp");
}

Address_purificationClient::~Address_purificationClient()
{}

Address_purificationClient::ClassifyPOIOutcome Address_purificationClient::classifyPOI(const ClassifyPOIRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClassifyPOIOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClassifyPOIOutcome(ClassifyPOIResult(outcome.result()));
	else
		return ClassifyPOIOutcome(outcome.error());
}

void Address_purificationClient::classifyPOIAsync(const ClassifyPOIRequest& request, const ClassifyPOIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, classifyPOI(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::ClassifyPOIOutcomeCallable Address_purificationClient::classifyPOICallable(const ClassifyPOIRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClassifyPOIOutcome()>>(
			[this, request]()
			{
			return this->classifyPOI(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::CompleteAddressOutcome Address_purificationClient::completeAddress(const CompleteAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompleteAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompleteAddressOutcome(CompleteAddressResult(outcome.result()));
	else
		return CompleteAddressOutcome(outcome.error());
}

void Address_purificationClient::completeAddressAsync(const CompleteAddressRequest& request, const CompleteAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, completeAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::CompleteAddressOutcomeCallable Address_purificationClient::completeAddressCallable(const CompleteAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompleteAddressOutcome()>>(
			[this, request]()
			{
			return this->completeAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::CorrectAddressOutcome Address_purificationClient::correctAddress(const CorrectAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CorrectAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CorrectAddressOutcome(CorrectAddressResult(outcome.result()));
	else
		return CorrectAddressOutcome(outcome.error());
}

void Address_purificationClient::correctAddressAsync(const CorrectAddressRequest& request, const CorrectAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, correctAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::CorrectAddressOutcomeCallable Address_purificationClient::correctAddressCallable(const CorrectAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CorrectAddressOutcome()>>(
			[this, request]()
			{
			return this->correctAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::ExtractAddressOutcome Address_purificationClient::extractAddress(const ExtractAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExtractAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExtractAddressOutcome(ExtractAddressResult(outcome.result()));
	else
		return ExtractAddressOutcome(outcome.error());
}

void Address_purificationClient::extractAddressAsync(const ExtractAddressRequest& request, const ExtractAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, extractAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::ExtractAddressOutcomeCallable Address_purificationClient::extractAddressCallable(const ExtractAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExtractAddressOutcome()>>(
			[this, request]()
			{
			return this->extractAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::ExtractExpressOutcome Address_purificationClient::extractExpress(const ExtractExpressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExtractExpressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExtractExpressOutcome(ExtractExpressResult(outcome.result()));
	else
		return ExtractExpressOutcome(outcome.error());
}

void Address_purificationClient::extractExpressAsync(const ExtractExpressRequest& request, const ExtractExpressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, extractExpress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::ExtractExpressOutcomeCallable Address_purificationClient::extractExpressCallable(const ExtractExpressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExtractExpressOutcome()>>(
			[this, request]()
			{
			return this->extractExpress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::ExtractNameOutcome Address_purificationClient::extractName(const ExtractNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExtractNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExtractNameOutcome(ExtractNameResult(outcome.result()));
	else
		return ExtractNameOutcome(outcome.error());
}

void Address_purificationClient::extractNameAsync(const ExtractNameRequest& request, const ExtractNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, extractName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::ExtractNameOutcomeCallable Address_purificationClient::extractNameCallable(const ExtractNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExtractNameOutcome()>>(
			[this, request]()
			{
			return this->extractName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::ExtractPhoneOutcome Address_purificationClient::extractPhone(const ExtractPhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExtractPhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExtractPhoneOutcome(ExtractPhoneResult(outcome.result()));
	else
		return ExtractPhoneOutcome(outcome.error());
}

void Address_purificationClient::extractPhoneAsync(const ExtractPhoneRequest& request, const ExtractPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, extractPhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::ExtractPhoneOutcomeCallable Address_purificationClient::extractPhoneCallable(const ExtractPhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExtractPhoneOutcome()>>(
			[this, request]()
			{
			return this->extractPhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetAddressBlockMappingOutcome Address_purificationClient::getAddressBlockMapping(const GetAddressBlockMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddressBlockMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddressBlockMappingOutcome(GetAddressBlockMappingResult(outcome.result()));
	else
		return GetAddressBlockMappingOutcome(outcome.error());
}

void Address_purificationClient::getAddressBlockMappingAsync(const GetAddressBlockMappingRequest& request, const GetAddressBlockMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddressBlockMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetAddressBlockMappingOutcomeCallable Address_purificationClient::getAddressBlockMappingCallable(const GetAddressBlockMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddressBlockMappingOutcome()>>(
			[this, request]()
			{
			return this->getAddressBlockMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetAddressDivisionCodeOutcome Address_purificationClient::getAddressDivisionCode(const GetAddressDivisionCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddressDivisionCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddressDivisionCodeOutcome(GetAddressDivisionCodeResult(outcome.result()));
	else
		return GetAddressDivisionCodeOutcome(outcome.error());
}

void Address_purificationClient::getAddressDivisionCodeAsync(const GetAddressDivisionCodeRequest& request, const GetAddressDivisionCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddressDivisionCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetAddressDivisionCodeOutcomeCallable Address_purificationClient::getAddressDivisionCodeCallable(const GetAddressDivisionCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddressDivisionCodeOutcome()>>(
			[this, request]()
			{
			return this->getAddressDivisionCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetAddressEvaluateOutcome Address_purificationClient::getAddressEvaluate(const GetAddressEvaluateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddressEvaluateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddressEvaluateOutcome(GetAddressEvaluateResult(outcome.result()));
	else
		return GetAddressEvaluateOutcome(outcome.error());
}

void Address_purificationClient::getAddressEvaluateAsync(const GetAddressEvaluateRequest& request, const GetAddressEvaluateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddressEvaluate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetAddressEvaluateOutcomeCallable Address_purificationClient::getAddressEvaluateCallable(const GetAddressEvaluateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddressEvaluateOutcome()>>(
			[this, request]()
			{
			return this->getAddressEvaluate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetAddressGeocodeOutcome Address_purificationClient::getAddressGeocode(const GetAddressGeocodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddressGeocodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddressGeocodeOutcome(GetAddressGeocodeResult(outcome.result()));
	else
		return GetAddressGeocodeOutcome(outcome.error());
}

void Address_purificationClient::getAddressGeocodeAsync(const GetAddressGeocodeRequest& request, const GetAddressGeocodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddressGeocode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetAddressGeocodeOutcomeCallable Address_purificationClient::getAddressGeocodeCallable(const GetAddressGeocodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddressGeocodeOutcome()>>(
			[this, request]()
			{
			return this->getAddressGeocode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetAddressSearchOutcome Address_purificationClient::getAddressSearch(const GetAddressSearchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddressSearchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddressSearchOutcome(GetAddressSearchResult(outcome.result()));
	else
		return GetAddressSearchOutcome(outcome.error());
}

void Address_purificationClient::getAddressSearchAsync(const GetAddressSearchRequest& request, const GetAddressSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddressSearch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetAddressSearchOutcomeCallable Address_purificationClient::getAddressSearchCallable(const GetAddressSearchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddressSearchOutcome()>>(
			[this, request]()
			{
			return this->getAddressSearch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetAddressSimilarityOutcome Address_purificationClient::getAddressSimilarity(const GetAddressSimilarityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAddressSimilarityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAddressSimilarityOutcome(GetAddressSimilarityResult(outcome.result()));
	else
		return GetAddressSimilarityOutcome(outcome.error());
}

void Address_purificationClient::getAddressSimilarityAsync(const GetAddressSimilarityRequest& request, const GetAddressSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAddressSimilarity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetAddressSimilarityOutcomeCallable Address_purificationClient::getAddressSimilarityCallable(const GetAddressSimilarityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAddressSimilarityOutcome()>>(
			[this, request]()
			{
			return this->getAddressSimilarity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetInputSearchOutcome Address_purificationClient::getInputSearch(const GetInputSearchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInputSearchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInputSearchOutcome(GetInputSearchResult(outcome.result()));
	else
		return GetInputSearchOutcome(outcome.error());
}

void Address_purificationClient::getInputSearchAsync(const GetInputSearchRequest& request, const GetInputSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInputSearch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetInputSearchOutcomeCallable Address_purificationClient::getInputSearchCallable(const GetInputSearchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInputSearchOutcome()>>(
			[this, request]()
			{
			return this->getInputSearch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::GetZipcodeOutcome Address_purificationClient::getZipcode(const GetZipcodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetZipcodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetZipcodeOutcome(GetZipcodeResult(outcome.result()));
	else
		return GetZipcodeOutcome(outcome.error());
}

void Address_purificationClient::getZipcodeAsync(const GetZipcodeRequest& request, const GetZipcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getZipcode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::GetZipcodeOutcomeCallable Address_purificationClient::getZipcodeCallable(const GetZipcodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetZipcodeOutcome()>>(
			[this, request]()
			{
			return this->getZipcode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::PredictPOIOutcome Address_purificationClient::predictPOI(const PredictPOIRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PredictPOIOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PredictPOIOutcome(PredictPOIResult(outcome.result()));
	else
		return PredictPOIOutcome(outcome.error());
}

void Address_purificationClient::predictPOIAsync(const PredictPOIRequest& request, const PredictPOIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, predictPOI(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::PredictPOIOutcomeCallable Address_purificationClient::predictPOICallable(const PredictPOIRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PredictPOIOutcome()>>(
			[this, request]()
			{
			return this->predictPOI(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::StructureAddressOutcome Address_purificationClient::structureAddress(const StructureAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StructureAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StructureAddressOutcome(StructureAddressResult(outcome.result()));
	else
		return StructureAddressOutcome(outcome.error());
}

void Address_purificationClient::structureAddressAsync(const StructureAddressRequest& request, const StructureAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, structureAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::StructureAddressOutcomeCallable Address_purificationClient::structureAddressCallable(const StructureAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StructureAddressOutcome()>>(
			[this, request]()
			{
			return this->structureAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::TransferCoordOutcome Address_purificationClient::transferCoord(const TransferCoordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferCoordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferCoordOutcome(TransferCoordResult(outcome.result()));
	else
		return TransferCoordOutcome(outcome.error());
}

void Address_purificationClient::transferCoordAsync(const TransferCoordRequest& request, const TransferCoordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferCoord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::TransferCoordOutcomeCallable Address_purificationClient::transferCoordCallable(const TransferCoordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferCoordOutcome()>>(
			[this, request]()
			{
			return this->transferCoord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Address_purificationClient::UpdateProjectOutcome Address_purificationClient::updateProject(const UpdateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectOutcome(UpdateProjectResult(outcome.result()));
	else
		return UpdateProjectOutcome(outcome.error());
}

void Address_purificationClient::updateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Address_purificationClient::UpdateProjectOutcomeCallable Address_purificationClient::updateProjectCallable(const UpdateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
			[this, request]()
			{
			return this->updateProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

