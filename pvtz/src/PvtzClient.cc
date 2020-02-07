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

#include <alibabacloud/pvtz/PvtzClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Pvtz;
using namespace AlibabaCloud::Pvtz::Model;

namespace
{
	const std::string SERVICE_NAME = "pvtz";
}

PvtzClient::PvtzClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "pvtz");
}

PvtzClient::PvtzClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "pvtz");
}

PvtzClient::PvtzClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "pvtz");
}

PvtzClient::~PvtzClient()
{}

PvtzClient::AddZoneOutcome PvtzClient::addZone(const AddZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddZoneOutcome(AddZoneResult(outcome.result()));
	else
		return AddZoneOutcome(outcome.error());
}

void PvtzClient::addZoneAsync(const AddZoneRequest& request, const AddZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::AddZoneOutcomeCallable PvtzClient::addZoneCallable(const AddZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddZoneOutcome()>>(
			[this, request]()
			{
			return this->addZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::AddZoneRecordOutcome PvtzClient::addZoneRecord(const AddZoneRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddZoneRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddZoneRecordOutcome(AddZoneRecordResult(outcome.result()));
	else
		return AddZoneRecordOutcome(outcome.error());
}

void PvtzClient::addZoneRecordAsync(const AddZoneRecordRequest& request, const AddZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addZoneRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::AddZoneRecordOutcomeCallable PvtzClient::addZoneRecordCallable(const AddZoneRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddZoneRecordOutcome()>>(
			[this, request]()
			{
			return this->addZoneRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::BindZoneVpcOutcome PvtzClient::bindZoneVpc(const BindZoneVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindZoneVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindZoneVpcOutcome(BindZoneVpcResult(outcome.result()));
	else
		return BindZoneVpcOutcome(outcome.error());
}

void PvtzClient::bindZoneVpcAsync(const BindZoneVpcRequest& request, const BindZoneVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindZoneVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::BindZoneVpcOutcomeCallable PvtzClient::bindZoneVpcCallable(const BindZoneVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindZoneVpcOutcome()>>(
			[this, request]()
			{
			return this->bindZoneVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::CheckZoneNameOutcome PvtzClient::checkZoneName(const CheckZoneNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckZoneNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckZoneNameOutcome(CheckZoneNameResult(outcome.result()));
	else
		return CheckZoneNameOutcome(outcome.error());
}

void PvtzClient::checkZoneNameAsync(const CheckZoneNameRequest& request, const CheckZoneNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkZoneName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::CheckZoneNameOutcomeCallable PvtzClient::checkZoneNameCallable(const CheckZoneNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckZoneNameOutcome()>>(
			[this, request]()
			{
			return this->checkZoneName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DeleteZoneOutcome PvtzClient::deleteZone(const DeleteZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteZoneOutcome(DeleteZoneResult(outcome.result()));
	else
		return DeleteZoneOutcome(outcome.error());
}

void PvtzClient::deleteZoneAsync(const DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DeleteZoneOutcomeCallable PvtzClient::deleteZoneCallable(const DeleteZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteZoneOutcome()>>(
			[this, request]()
			{
			return this->deleteZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DeleteZoneRecordOutcome PvtzClient::deleteZoneRecord(const DeleteZoneRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteZoneRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteZoneRecordOutcome(DeleteZoneRecordResult(outcome.result()));
	else
		return DeleteZoneRecordOutcome(outcome.error());
}

void PvtzClient::deleteZoneRecordAsync(const DeleteZoneRecordRequest& request, const DeleteZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteZoneRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DeleteZoneRecordOutcomeCallable PvtzClient::deleteZoneRecordCallable(const DeleteZoneRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteZoneRecordOutcome()>>(
			[this, request]()
			{
			return this->deleteZoneRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeChangeLogsOutcome PvtzClient::describeChangeLogs(const DescribeChangeLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChangeLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChangeLogsOutcome(DescribeChangeLogsResult(outcome.result()));
	else
		return DescribeChangeLogsOutcome(outcome.error());
}

void PvtzClient::describeChangeLogsAsync(const DescribeChangeLogsRequest& request, const DescribeChangeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChangeLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeChangeLogsOutcomeCallable PvtzClient::describeChangeLogsCallable(const DescribeChangeLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChangeLogsOutcome()>>(
			[this, request]()
			{
			return this->describeChangeLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeRegionsOutcome PvtzClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void PvtzClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeRegionsOutcomeCallable PvtzClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeRequestGraphOutcome PvtzClient::describeRequestGraph(const DescribeRequestGraphRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRequestGraphOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRequestGraphOutcome(DescribeRequestGraphResult(outcome.result()));
	else
		return DescribeRequestGraphOutcome(outcome.error());
}

void PvtzClient::describeRequestGraphAsync(const DescribeRequestGraphRequest& request, const DescribeRequestGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRequestGraph(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeRequestGraphOutcomeCallable PvtzClient::describeRequestGraphCallable(const DescribeRequestGraphRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRequestGraphOutcome()>>(
			[this, request]()
			{
			return this->describeRequestGraph(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeStatisticSummaryOutcome PvtzClient::describeStatisticSummary(const DescribeStatisticSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStatisticSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStatisticSummaryOutcome(DescribeStatisticSummaryResult(outcome.result()));
	else
		return DescribeStatisticSummaryOutcome(outcome.error());
}

void PvtzClient::describeStatisticSummaryAsync(const DescribeStatisticSummaryRequest& request, const DescribeStatisticSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStatisticSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeStatisticSummaryOutcomeCallable PvtzClient::describeStatisticSummaryCallable(const DescribeStatisticSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStatisticSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeStatisticSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeUserServiceStatusOutcome PvtzClient::describeUserServiceStatus(const DescribeUserServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserServiceStatusOutcome(DescribeUserServiceStatusResult(outcome.result()));
	else
		return DescribeUserServiceStatusOutcome(outcome.error());
}

void PvtzClient::describeUserServiceStatusAsync(const DescribeUserServiceStatusRequest& request, const DescribeUserServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeUserServiceStatusOutcomeCallable PvtzClient::describeUserServiceStatusCallable(const DescribeUserServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeZoneInfoOutcome PvtzClient::describeZoneInfo(const DescribeZoneInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZoneInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZoneInfoOutcome(DescribeZoneInfoResult(outcome.result()));
	else
		return DescribeZoneInfoOutcome(outcome.error());
}

void PvtzClient::describeZoneInfoAsync(const DescribeZoneInfoRequest& request, const DescribeZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZoneInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeZoneInfoOutcomeCallable PvtzClient::describeZoneInfoCallable(const DescribeZoneInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZoneInfoOutcome()>>(
			[this, request]()
			{
			return this->describeZoneInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeZoneRecordsOutcome PvtzClient::describeZoneRecords(const DescribeZoneRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZoneRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZoneRecordsOutcome(DescribeZoneRecordsResult(outcome.result()));
	else
		return DescribeZoneRecordsOutcome(outcome.error());
}

void PvtzClient::describeZoneRecordsAsync(const DescribeZoneRecordsRequest& request, const DescribeZoneRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZoneRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeZoneRecordsOutcomeCallable PvtzClient::describeZoneRecordsCallable(const DescribeZoneRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZoneRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeZoneRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeZoneVpcTreeOutcome PvtzClient::describeZoneVpcTree(const DescribeZoneVpcTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZoneVpcTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZoneVpcTreeOutcome(DescribeZoneVpcTreeResult(outcome.result()));
	else
		return DescribeZoneVpcTreeOutcome(outcome.error());
}

void PvtzClient::describeZoneVpcTreeAsync(const DescribeZoneVpcTreeRequest& request, const DescribeZoneVpcTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZoneVpcTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeZoneVpcTreeOutcomeCallable PvtzClient::describeZoneVpcTreeCallable(const DescribeZoneVpcTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZoneVpcTreeOutcome()>>(
			[this, request]()
			{
			return this->describeZoneVpcTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::DescribeZonesOutcome PvtzClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void PvtzClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::DescribeZonesOutcomeCallable PvtzClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::SetProxyPatternOutcome PvtzClient::setProxyPattern(const SetProxyPatternRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetProxyPatternOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetProxyPatternOutcome(SetProxyPatternResult(outcome.result()));
	else
		return SetProxyPatternOutcome(outcome.error());
}

void PvtzClient::setProxyPatternAsync(const SetProxyPatternRequest& request, const SetProxyPatternAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setProxyPattern(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::SetProxyPatternOutcomeCallable PvtzClient::setProxyPatternCallable(const SetProxyPatternRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetProxyPatternOutcome()>>(
			[this, request]()
			{
			return this->setProxyPattern(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::SetZoneRecordStatusOutcome PvtzClient::setZoneRecordStatus(const SetZoneRecordStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetZoneRecordStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetZoneRecordStatusOutcome(SetZoneRecordStatusResult(outcome.result()));
	else
		return SetZoneRecordStatusOutcome(outcome.error());
}

void PvtzClient::setZoneRecordStatusAsync(const SetZoneRecordStatusRequest& request, const SetZoneRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setZoneRecordStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::SetZoneRecordStatusOutcomeCallable PvtzClient::setZoneRecordStatusCallable(const SetZoneRecordStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetZoneRecordStatusOutcome()>>(
			[this, request]()
			{
			return this->setZoneRecordStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::UpdateRecordRemarkOutcome PvtzClient::updateRecordRemark(const UpdateRecordRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRecordRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRecordRemarkOutcome(UpdateRecordRemarkResult(outcome.result()));
	else
		return UpdateRecordRemarkOutcome(outcome.error());
}

void PvtzClient::updateRecordRemarkAsync(const UpdateRecordRemarkRequest& request, const UpdateRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRecordRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::UpdateRecordRemarkOutcomeCallable PvtzClient::updateRecordRemarkCallable(const UpdateRecordRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRecordRemarkOutcome()>>(
			[this, request]()
			{
			return this->updateRecordRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::UpdateZoneRecordOutcome PvtzClient::updateZoneRecord(const UpdateZoneRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateZoneRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateZoneRecordOutcome(UpdateZoneRecordResult(outcome.result()));
	else
		return UpdateZoneRecordOutcome(outcome.error());
}

void PvtzClient::updateZoneRecordAsync(const UpdateZoneRecordRequest& request, const UpdateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateZoneRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::UpdateZoneRecordOutcomeCallable PvtzClient::updateZoneRecordCallable(const UpdateZoneRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateZoneRecordOutcome()>>(
			[this, request]()
			{
			return this->updateZoneRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PvtzClient::UpdateZoneRemarkOutcome PvtzClient::updateZoneRemark(const UpdateZoneRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateZoneRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateZoneRemarkOutcome(UpdateZoneRemarkResult(outcome.result()));
	else
		return UpdateZoneRemarkOutcome(outcome.error());
}

void PvtzClient::updateZoneRemarkAsync(const UpdateZoneRemarkRequest& request, const UpdateZoneRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateZoneRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PvtzClient::UpdateZoneRemarkOutcomeCallable PvtzClient::updateZoneRemarkCallable(const UpdateZoneRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateZoneRemarkOutcome()>>(
			[this, request]()
			{
			return this->updateZoneRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

