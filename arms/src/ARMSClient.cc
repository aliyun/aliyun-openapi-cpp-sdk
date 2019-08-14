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

#include <alibabacloud/arms/ARMSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

namespace
{
	const std::string SERVICE_NAME = "ARMS";
}

ARMSClient::ARMSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms");
}

ARMSClient::ARMSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms");
}

ARMSClient::ARMSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms");
}

ARMSClient::~ARMSClient()
{}

ARMSClient::SearchAlertContactOutcome ARMSClient::searchAlertContact(const SearchAlertContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchAlertContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchAlertContactOutcome(SearchAlertContactResult(outcome.result()));
	else
		return SearchAlertContactOutcome(outcome.error());
}

void ARMSClient::searchAlertContactAsync(const SearchAlertContactRequest& request, const SearchAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchAlertContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchAlertContactOutcomeCallable ARMSClient::searchAlertContactCallable(const SearchAlertContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchAlertContactOutcome()>>(
			[this, request]()
			{
			return this->searchAlertContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTraceOutcome ARMSClient::getTrace(const GetTraceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTraceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTraceOutcome(GetTraceResult(outcome.result()));
	else
		return GetTraceOutcome(outcome.error());
}

void ARMSClient::getTraceAsync(const GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTrace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTraceOutcomeCallable ARMSClient::getTraceCallable(const GetTraceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTraceOutcome()>>(
			[this, request]()
			{
			return this->getTrace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListTraceAppsOutcome ARMSClient::listTraceApps(const ListTraceAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTraceAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTraceAppsOutcome(ListTraceAppsResult(outcome.result()));
	else
		return ListTraceAppsOutcome(outcome.error());
}

void ARMSClient::listTraceAppsAsync(const ListTraceAppsRequest& request, const ListTraceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTraceApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListTraceAppsOutcomeCallable ARMSClient::listTraceAppsCallable(const ListTraceAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTraceAppsOutcome()>>(
			[this, request]()
			{
			return this->listTraceApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteRetcodeAppOutcome ARMSClient::deleteRetcodeApp(const DeleteRetcodeAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRetcodeAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRetcodeAppOutcome(DeleteRetcodeAppResult(outcome.result()));
	else
		return DeleteRetcodeAppOutcome(outcome.error());
}

void ARMSClient::deleteRetcodeAppAsync(const DeleteRetcodeAppRequest& request, const DeleteRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRetcodeApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteRetcodeAppOutcomeCallable ARMSClient::deleteRetcodeAppCallable(const DeleteRetcodeAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRetcodeAppOutcome()>>(
			[this, request]()
			{
			return this->deleteRetcodeApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTraceAppByPageOutcome ARMSClient::searchTraceAppByPage(const SearchTraceAppByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTraceAppByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTraceAppByPageOutcome(SearchTraceAppByPageResult(outcome.result()));
	else
		return SearchTraceAppByPageOutcome(outcome.error());
}

void ARMSClient::searchTraceAppByPageAsync(const SearchTraceAppByPageRequest& request, const SearchTraceAppByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraceAppByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTraceAppByPageOutcomeCallable ARMSClient::searchTraceAppByPageCallable(const SearchTraceAppByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTraceAppByPageOutcome()>>(
			[this, request]()
			{
			return this->searchTraceAppByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ImportAppAlertRulesOutcome ARMSClient::importAppAlertRules(const ImportAppAlertRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportAppAlertRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportAppAlertRulesOutcome(ImportAppAlertRulesResult(outcome.result()));
	else
		return ImportAppAlertRulesOutcome(outcome.error());
}

void ARMSClient::importAppAlertRulesAsync(const ImportAppAlertRulesRequest& request, const ImportAppAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importAppAlertRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ImportAppAlertRulesOutcomeCallable ARMSClient::importAppAlertRulesCallable(const ImportAppAlertRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportAppAlertRulesOutcome()>>(
			[this, request]()
			{
			return this->importAppAlertRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateAlertContactGroupOutcome ARMSClient::createAlertContactGroup(const CreateAlertContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlertContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlertContactGroupOutcome(CreateAlertContactGroupResult(outcome.result()));
	else
		return CreateAlertContactGroupOutcome(outcome.error());
}

void ARMSClient::createAlertContactGroupAsync(const CreateAlertContactGroupRequest& request, const CreateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlertContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateAlertContactGroupOutcomeCallable ARMSClient::createAlertContactGroupCallable(const CreateAlertContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlertContactGroupOutcome()>>(
			[this, request]()
			{
			return this->createAlertContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryDatasetOutcome ARMSClient::queryDataset(const QueryDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDatasetOutcome(QueryDatasetResult(outcome.result()));
	else
		return QueryDatasetOutcome(outcome.error());
}

void ARMSClient::queryDatasetAsync(const QueryDatasetRequest& request, const QueryDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryDatasetOutcomeCallable ARMSClient::queryDatasetCallable(const QueryDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDatasetOutcome()>>(
			[this, request]()
			{
			return this->queryDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTraceAppByNameOutcome ARMSClient::searchTraceAppByName(const SearchTraceAppByNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTraceAppByNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTraceAppByNameOutcome(SearchTraceAppByNameResult(outcome.result()));
	else
		return SearchTraceAppByNameOutcome(outcome.error());
}

void ARMSClient::searchTraceAppByNameAsync(const SearchTraceAppByNameRequest& request, const SearchTraceAppByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraceAppByName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTraceAppByNameOutcomeCallable ARMSClient::searchTraceAppByNameCallable(const SearchTraceAppByNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTraceAppByNameOutcome()>>(
			[this, request]()
			{
			return this->searchTraceAppByName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchRetcodeAppByPageOutcome ARMSClient::searchRetcodeAppByPage(const SearchRetcodeAppByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchRetcodeAppByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchRetcodeAppByPageOutcome(SearchRetcodeAppByPageResult(outcome.result()));
	else
		return SearchRetcodeAppByPageOutcome(outcome.error());
}

void ARMSClient::searchRetcodeAppByPageAsync(const SearchRetcodeAppByPageRequest& request, const SearchRetcodeAppByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchRetcodeAppByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchRetcodeAppByPageOutcomeCallable ARMSClient::searchRetcodeAppByPageCallable(const SearchRetcodeAppByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchRetcodeAppByPageOutcome()>>(
			[this, request]()
			{
			return this->searchRetcodeAppByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListRetcodeAppsOutcome ARMSClient::listRetcodeApps(const ListRetcodeAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRetcodeAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRetcodeAppsOutcome(ListRetcodeAppsResult(outcome.result()));
	else
		return ListRetcodeAppsOutcome(outcome.error());
}

void ARMSClient::listRetcodeAppsAsync(const ListRetcodeAppsRequest& request, const ListRetcodeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRetcodeApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListRetcodeAppsOutcomeCallable ARMSClient::listRetcodeAppsCallable(const ListRetcodeAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRetcodeAppsOutcome()>>(
			[this, request]()
			{
			return this->listRetcodeApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetSpanNamesOutcome ARMSClient::getSpanNames(const GetSpanNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSpanNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSpanNamesOutcome(GetSpanNamesResult(outcome.result()));
	else
		return GetSpanNamesOutcome(outcome.error());
}

void ARMSClient::getSpanNamesAsync(const GetSpanNamesRequest& request, const GetSpanNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSpanNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetSpanNamesOutcomeCallable ARMSClient::getSpanNamesCallable(const GetSpanNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSpanNamesOutcome()>>(
			[this, request]()
			{
			return this->getSpanNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetServicesOutcome ARMSClient::getServices(const GetServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServicesOutcome(GetServicesResult(outcome.result()));
	else
		return GetServicesOutcome(outcome.error());
}

void ARMSClient::getServicesAsync(const GetServicesRequest& request, const GetServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetServicesOutcomeCallable ARMSClient::getServicesCallable(const GetServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServicesOutcome()>>(
			[this, request]()
			{
			return this->getServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::MetricQueryOutcome ARMSClient::metricQuery(const MetricQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetricQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetricQueryOutcome(MetricQueryResult(outcome.result()));
	else
		return MetricQueryOutcome(outcome.error());
}

void ARMSClient::metricQueryAsync(const MetricQueryRequest& request, const MetricQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metricQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::MetricQueryOutcomeCallable ARMSClient::metricQueryCallable(const MetricQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetricQueryOutcome()>>(
			[this, request]()
			{
			return this->metricQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTracesOutcome ARMSClient::searchTraces(const SearchTracesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTracesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTracesOutcome(SearchTracesResult(outcome.result()));
	else
		return SearchTracesOutcome(outcome.error());
}

void ARMSClient::searchTracesAsync(const SearchTracesRequest& request, const SearchTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTracesOutcomeCallable ARMSClient::searchTracesCallable(const SearchTracesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTracesOutcome()>>(
			[this, request]()
			{
			return this->searchTraces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchAlertContactGroupOutcome ARMSClient::searchAlertContactGroup(const SearchAlertContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchAlertContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchAlertContactGroupOutcome(SearchAlertContactGroupResult(outcome.result()));
	else
		return SearchAlertContactGroupOutcome(outcome.error());
}

void ARMSClient::searchAlertContactGroupAsync(const SearchAlertContactGroupRequest& request, const SearchAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchAlertContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchAlertContactGroupOutcomeCallable ARMSClient::searchAlertContactGroupCallable(const SearchAlertContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchAlertContactGroupOutcome()>>(
			[this, request]()
			{
			return this->searchAlertContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateAlertContactOutcome ARMSClient::createAlertContact(const CreateAlertContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlertContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlertContactOutcome(CreateAlertContactResult(outcome.result()));
	else
		return CreateAlertContactOutcome(outcome.error());
}

void ARMSClient::createAlertContactAsync(const CreateAlertContactRequest& request, const CreateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlertContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateAlertContactOutcomeCallable ARMSClient::createAlertContactCallable(const CreateAlertContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlertContactOutcome()>>(
			[this, request]()
			{
			return this->createAlertContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryMetricOutcome ARMSClient::queryMetric(const QueryMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricOutcome(QueryMetricResult(outcome.result()));
	else
		return QueryMetricOutcome(outcome.error());
}

void ARMSClient::queryMetricAsync(const QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryMetricOutcomeCallable ARMSClient::queryMetricCallable(const QueryMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricOutcome()>>(
			[this, request]()
			{
			return this->queryMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTraceCountOutcome ARMSClient::searchTraceCount(const SearchTraceCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTraceCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTraceCountOutcome(SearchTraceCountResult(outcome.result()));
	else
		return SearchTraceCountOutcome(outcome.error());
}

void ARMSClient::searchTraceCountAsync(const SearchTraceCountRequest& request, const SearchTraceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraceCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTraceCountOutcomeCallable ARMSClient::searchTraceCountCallable(const SearchTraceCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTraceCountOutcome()>>(
			[this, request]()
			{
			return this->searchTraceCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTagKeyOutcome ARMSClient::getTagKey(const GetTagKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTagKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTagKeyOutcome(GetTagKeyResult(outcome.result()));
	else
		return GetTagKeyOutcome(outcome.error());
}

void ARMSClient::getTagKeyAsync(const GetTagKeyRequest& request, const GetTagKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTagKeyOutcomeCallable ARMSClient::getTagKeyCallable(const GetTagKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagKeyOutcome()>>(
			[this, request]()
			{
			return this->getTagKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ARMSQueryDataSetOutcome ARMSClient::aRMSQueryDataSet(const ARMSQueryDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ARMSQueryDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ARMSQueryDataSetOutcome(ARMSQueryDataSetResult(outcome.result()));
	else
		return ARMSQueryDataSetOutcome(outcome.error());
}

void ARMSClient::aRMSQueryDataSetAsync(const ARMSQueryDataSetRequest& request, const ARMSQueryDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aRMSQueryDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ARMSQueryDataSetOutcomeCallable ARMSClient::aRMSQueryDataSetCallable(const ARMSQueryDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ARMSQueryDataSetOutcome()>>(
			[this, request]()
			{
			return this->aRMSQueryDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateRetcodeAppOutcome ARMSClient::createRetcodeApp(const CreateRetcodeAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRetcodeAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRetcodeAppOutcome(CreateRetcodeAppResult(outcome.result()));
	else
		return CreateRetcodeAppOutcome(outcome.error());
}

void ARMSClient::createRetcodeAppAsync(const CreateRetcodeAppRequest& request, const CreateRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRetcodeApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateRetcodeAppOutcomeCallable ARMSClient::createRetcodeAppCallable(const CreateRetcodeAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRetcodeAppOutcome()>>(
			[this, request]()
			{
			return this->createRetcodeApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTagValOutcome ARMSClient::getTagVal(const GetTagValRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTagValOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTagValOutcome(GetTagValResult(outcome.result()));
	else
		return GetTagValOutcome(outcome.error());
}

void ARMSClient::getTagValAsync(const GetTagValRequest& request, const GetTagValAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagVal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTagValOutcomeCallable ARMSClient::getTagValCallable(const GetTagValRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagValOutcome()>>(
			[this, request]()
			{
			return this->getTagVal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

