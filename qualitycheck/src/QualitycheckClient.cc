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

#include <alibabacloud/qualitycheck/QualitycheckClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

namespace
{
	const std::string SERVICE_NAME = "Qualitycheck";
}

QualitycheckClient::QualitycheckClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

QualitycheckClient::QualitycheckClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

QualitycheckClient::QualitycheckClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

QualitycheckClient::~QualitycheckClient()
{}

QualitycheckClient::AddBusinessCategoryOutcome QualitycheckClient::addBusinessCategory(const AddBusinessCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBusinessCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBusinessCategoryOutcome(AddBusinessCategoryResult(outcome.result()));
	else
		return AddBusinessCategoryOutcome(outcome.error());
}

void QualitycheckClient::addBusinessCategoryAsync(const AddBusinessCategoryRequest& request, const AddBusinessCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBusinessCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::AddBusinessCategoryOutcomeCallable QualitycheckClient::addBusinessCategoryCallable(const AddBusinessCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBusinessCategoryOutcome()>>(
			[this, request]()
			{
			return this->addBusinessCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::AddRuleCategoryOutcome QualitycheckClient::addRuleCategory(const AddRuleCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRuleCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRuleCategoryOutcome(AddRuleCategoryResult(outcome.result()));
	else
		return AddRuleCategoryOutcome(outcome.error());
}

void QualitycheckClient::addRuleCategoryAsync(const AddRuleCategoryRequest& request, const AddRuleCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRuleCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::AddRuleCategoryOutcomeCallable QualitycheckClient::addRuleCategoryCallable(const AddRuleCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRuleCategoryOutcome()>>(
			[this, request]()
			{
			return this->addRuleCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::AddThesaurusForApiOutcome QualitycheckClient::addThesaurusForApi(const AddThesaurusForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddThesaurusForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddThesaurusForApiOutcome(AddThesaurusForApiResult(outcome.result()));
	else
		return AddThesaurusForApiOutcome(outcome.error());
}

void QualitycheckClient::addThesaurusForApiAsync(const AddThesaurusForApiRequest& request, const AddThesaurusForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addThesaurusForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::AddThesaurusForApiOutcomeCallable QualitycheckClient::addThesaurusForApiCallable(const AddThesaurusForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddThesaurusForApiOutcome()>>(
			[this, request]()
			{
			return this->addThesaurusForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::AssignReviewerOutcome QualitycheckClient::assignReviewer(const AssignReviewerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignReviewerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignReviewerOutcome(AssignReviewerResult(outcome.result()));
	else
		return AssignReviewerOutcome(outcome.error());
}

void QualitycheckClient::assignReviewerAsync(const AssignReviewerRequest& request, const AssignReviewerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignReviewer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::AssignReviewerOutcomeCallable QualitycheckClient::assignReviewerCallable(const AssignReviewerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignReviewerOutcome()>>(
			[this, request]()
			{
			return this->assignReviewer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::CreateAsrVocabOutcome QualitycheckClient::createAsrVocab(const CreateAsrVocabRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAsrVocabOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAsrVocabOutcome(CreateAsrVocabResult(outcome.result()));
	else
		return CreateAsrVocabOutcome(outcome.error());
}

void QualitycheckClient::createAsrVocabAsync(const CreateAsrVocabRequest& request, const CreateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAsrVocab(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::CreateAsrVocabOutcomeCallable QualitycheckClient::createAsrVocabCallable(const CreateAsrVocabRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAsrVocabOutcome()>>(
			[this, request]()
			{
			return this->createAsrVocab(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::CreateSkillGroupConfigOutcome QualitycheckClient::createSkillGroupConfig(const CreateSkillGroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSkillGroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSkillGroupConfigOutcome(CreateSkillGroupConfigResult(outcome.result()));
	else
		return CreateSkillGroupConfigOutcome(outcome.error());
}

void QualitycheckClient::createSkillGroupConfigAsync(const CreateSkillGroupConfigRequest& request, const CreateSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSkillGroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::CreateSkillGroupConfigOutcomeCallable QualitycheckClient::createSkillGroupConfigCallable(const CreateSkillGroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSkillGroupConfigOutcome()>>(
			[this, request]()
			{
			return this->createSkillGroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::CreateTaskAssignRuleOutcome QualitycheckClient::createTaskAssignRule(const CreateTaskAssignRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTaskAssignRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTaskAssignRuleOutcome(CreateTaskAssignRuleResult(outcome.result()));
	else
		return CreateTaskAssignRuleOutcome(outcome.error());
}

void QualitycheckClient::createTaskAssignRuleAsync(const CreateTaskAssignRuleRequest& request, const CreateTaskAssignRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTaskAssignRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::CreateTaskAssignRuleOutcomeCallable QualitycheckClient::createTaskAssignRuleCallable(const CreateTaskAssignRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskAssignRuleOutcome()>>(
			[this, request]()
			{
			return this->createTaskAssignRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::CreateUserOutcome QualitycheckClient::createUser(const CreateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserOutcome(CreateUserResult(outcome.result()));
	else
		return CreateUserOutcome(outcome.error());
}

void QualitycheckClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::CreateUserOutcomeCallable QualitycheckClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::CreateWarningConfigOutcome QualitycheckClient::createWarningConfig(const CreateWarningConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWarningConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWarningConfigOutcome(CreateWarningConfigResult(outcome.result()));
	else
		return CreateWarningConfigOutcome(outcome.error());
}

void QualitycheckClient::createWarningConfigAsync(const CreateWarningConfigRequest& request, const CreateWarningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWarningConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::CreateWarningConfigOutcomeCallable QualitycheckClient::createWarningConfigCallable(const CreateWarningConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWarningConfigOutcome()>>(
			[this, request]()
			{
			return this->createWarningConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DelRuleCategoryOutcome QualitycheckClient::delRuleCategory(const DelRuleCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelRuleCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelRuleCategoryOutcome(DelRuleCategoryResult(outcome.result()));
	else
		return DelRuleCategoryOutcome(outcome.error());
}

void QualitycheckClient::delRuleCategoryAsync(const DelRuleCategoryRequest& request, const DelRuleCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delRuleCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DelRuleCategoryOutcomeCallable QualitycheckClient::delRuleCategoryCallable(const DelRuleCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelRuleCategoryOutcome()>>(
			[this, request]()
			{
			return this->delRuleCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DelThesaurusForApiOutcome QualitycheckClient::delThesaurusForApi(const DelThesaurusForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelThesaurusForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelThesaurusForApiOutcome(DelThesaurusForApiResult(outcome.result()));
	else
		return DelThesaurusForApiOutcome(outcome.error());
}

void QualitycheckClient::delThesaurusForApiAsync(const DelThesaurusForApiRequest& request, const DelThesaurusForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delThesaurusForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DelThesaurusForApiOutcomeCallable QualitycheckClient::delThesaurusForApiCallable(const DelThesaurusForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelThesaurusForApiOutcome()>>(
			[this, request]()
			{
			return this->delThesaurusForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteAsrVocabOutcome QualitycheckClient::deleteAsrVocab(const DeleteAsrVocabRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAsrVocabOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAsrVocabOutcome(DeleteAsrVocabResult(outcome.result()));
	else
		return DeleteAsrVocabOutcome(outcome.error());
}

void QualitycheckClient::deleteAsrVocabAsync(const DeleteAsrVocabRequest& request, const DeleteAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAsrVocab(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteAsrVocabOutcomeCallable QualitycheckClient::deleteAsrVocabCallable(const DeleteAsrVocabRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAsrVocabOutcome()>>(
			[this, request]()
			{
			return this->deleteAsrVocab(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteBusinessCategoryOutcome QualitycheckClient::deleteBusinessCategory(const DeleteBusinessCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBusinessCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBusinessCategoryOutcome(DeleteBusinessCategoryResult(outcome.result()));
	else
		return DeleteBusinessCategoryOutcome(outcome.error());
}

void QualitycheckClient::deleteBusinessCategoryAsync(const DeleteBusinessCategoryRequest& request, const DeleteBusinessCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBusinessCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteBusinessCategoryOutcomeCallable QualitycheckClient::deleteBusinessCategoryCallable(const DeleteBusinessCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBusinessCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteBusinessCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteCustomizationConfigOutcome QualitycheckClient::deleteCustomizationConfig(const DeleteCustomizationConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomizationConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomizationConfigOutcome(DeleteCustomizationConfigResult(outcome.result()));
	else
		return DeleteCustomizationConfigOutcome(outcome.error());
}

void QualitycheckClient::deleteCustomizationConfigAsync(const DeleteCustomizationConfigRequest& request, const DeleteCustomizationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomizationConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteCustomizationConfigOutcomeCallable QualitycheckClient::deleteCustomizationConfigCallable(const DeleteCustomizationConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomizationConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomizationConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteDataSetOutcome QualitycheckClient::deleteDataSet(const DeleteDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSetOutcome(DeleteDataSetResult(outcome.result()));
	else
		return DeleteDataSetOutcome(outcome.error());
}

void QualitycheckClient::deleteDataSetAsync(const DeleteDataSetRequest& request, const DeleteDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteDataSetOutcomeCallable QualitycheckClient::deleteDataSetCallable(const DeleteDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSetOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeletePrecisionTaskOutcome QualitycheckClient::deletePrecisionTask(const DeletePrecisionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrecisionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrecisionTaskOutcome(DeletePrecisionTaskResult(outcome.result()));
	else
		return DeletePrecisionTaskOutcome(outcome.error());
}

void QualitycheckClient::deletePrecisionTaskAsync(const DeletePrecisionTaskRequest& request, const DeletePrecisionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrecisionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeletePrecisionTaskOutcomeCallable QualitycheckClient::deletePrecisionTaskCallable(const DeletePrecisionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrecisionTaskOutcome()>>(
			[this, request]()
			{
			return this->deletePrecisionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteScoreForApiOutcome QualitycheckClient::deleteScoreForApi(const DeleteScoreForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScoreForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScoreForApiOutcome(DeleteScoreForApiResult(outcome.result()));
	else
		return DeleteScoreForApiOutcome(outcome.error());
}

void QualitycheckClient::deleteScoreForApiAsync(const DeleteScoreForApiRequest& request, const DeleteScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScoreForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteScoreForApiOutcomeCallable QualitycheckClient::deleteScoreForApiCallable(const DeleteScoreForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScoreForApiOutcome()>>(
			[this, request]()
			{
			return this->deleteScoreForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteSkillGroupConfigOutcome QualitycheckClient::deleteSkillGroupConfig(const DeleteSkillGroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSkillGroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSkillGroupConfigOutcome(DeleteSkillGroupConfigResult(outcome.result()));
	else
		return DeleteSkillGroupConfigOutcome(outcome.error());
}

void QualitycheckClient::deleteSkillGroupConfigAsync(const DeleteSkillGroupConfigRequest& request, const DeleteSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSkillGroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteSkillGroupConfigOutcomeCallable QualitycheckClient::deleteSkillGroupConfigCallable(const DeleteSkillGroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSkillGroupConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteSkillGroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteSubScoreForApiOutcome QualitycheckClient::deleteSubScoreForApi(const DeleteSubScoreForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSubScoreForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSubScoreForApiOutcome(DeleteSubScoreForApiResult(outcome.result()));
	else
		return DeleteSubScoreForApiOutcome(outcome.error());
}

void QualitycheckClient::deleteSubScoreForApiAsync(const DeleteSubScoreForApiRequest& request, const DeleteSubScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSubScoreForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteSubScoreForApiOutcomeCallable QualitycheckClient::deleteSubScoreForApiCallable(const DeleteSubScoreForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSubScoreForApiOutcome()>>(
			[this, request]()
			{
			return this->deleteSubScoreForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteTaskAssignRuleOutcome QualitycheckClient::deleteTaskAssignRule(const DeleteTaskAssignRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTaskAssignRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTaskAssignRuleOutcome(DeleteTaskAssignRuleResult(outcome.result()));
	else
		return DeleteTaskAssignRuleOutcome(outcome.error());
}

void QualitycheckClient::deleteTaskAssignRuleAsync(const DeleteTaskAssignRuleRequest& request, const DeleteTaskAssignRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTaskAssignRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteTaskAssignRuleOutcomeCallable QualitycheckClient::deleteTaskAssignRuleCallable(const DeleteTaskAssignRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTaskAssignRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteTaskAssignRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteUserOutcome QualitycheckClient::deleteUser(const DeleteUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserOutcome(DeleteUserResult(outcome.result()));
	else
		return DeleteUserOutcome(outcome.error());
}

void QualitycheckClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteUserOutcomeCallable QualitycheckClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::DeleteWarningConfigOutcome QualitycheckClient::deleteWarningConfig(const DeleteWarningConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWarningConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWarningConfigOutcome(DeleteWarningConfigResult(outcome.result()));
	else
		return DeleteWarningConfigOutcome(outcome.error());
}

void QualitycheckClient::deleteWarningConfigAsync(const DeleteWarningConfigRequest& request, const DeleteWarningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWarningConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::DeleteWarningConfigOutcomeCallable QualitycheckClient::deleteWarningConfigCallable(const DeleteWarningConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWarningConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteWarningConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::EditThesaurusForApiOutcome QualitycheckClient::editThesaurusForApi(const EditThesaurusForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditThesaurusForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditThesaurusForApiOutcome(EditThesaurusForApiResult(outcome.result()));
	else
		return EditThesaurusForApiOutcome(outcome.error());
}

void QualitycheckClient::editThesaurusForApiAsync(const EditThesaurusForApiRequest& request, const EditThesaurusForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editThesaurusForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::EditThesaurusForApiOutcomeCallable QualitycheckClient::editThesaurusForApiCallable(const EditThesaurusForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditThesaurusForApiOutcome()>>(
			[this, request]()
			{
			return this->editThesaurusForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetAsrVocabOutcome QualitycheckClient::getAsrVocab(const GetAsrVocabRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsrVocabOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsrVocabOutcome(GetAsrVocabResult(outcome.result()));
	else
		return GetAsrVocabOutcome(outcome.error());
}

void QualitycheckClient::getAsrVocabAsync(const GetAsrVocabRequest& request, const GetAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsrVocab(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetAsrVocabOutcomeCallable QualitycheckClient::getAsrVocabCallable(const GetAsrVocabRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsrVocabOutcome()>>(
			[this, request]()
			{
			return this->getAsrVocab(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetBusinessCategoryListOutcome QualitycheckClient::getBusinessCategoryList(const GetBusinessCategoryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBusinessCategoryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBusinessCategoryListOutcome(GetBusinessCategoryListResult(outcome.result()));
	else
		return GetBusinessCategoryListOutcome(outcome.error());
}

void QualitycheckClient::getBusinessCategoryListAsync(const GetBusinessCategoryListRequest& request, const GetBusinessCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBusinessCategoryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetBusinessCategoryListOutcomeCallable QualitycheckClient::getBusinessCategoryListCallable(const GetBusinessCategoryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBusinessCategoryListOutcome()>>(
			[this, request]()
			{
			return this->getBusinessCategoryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetCustomizationConfigListOutcome QualitycheckClient::getCustomizationConfigList(const GetCustomizationConfigListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomizationConfigListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomizationConfigListOutcome(GetCustomizationConfigListResult(outcome.result()));
	else
		return GetCustomizationConfigListOutcome(outcome.error());
}

void QualitycheckClient::getCustomizationConfigListAsync(const GetCustomizationConfigListRequest& request, const GetCustomizationConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomizationConfigList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetCustomizationConfigListOutcomeCallable QualitycheckClient::getCustomizationConfigListCallable(const GetCustomizationConfigListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomizationConfigListOutcome()>>(
			[this, request]()
			{
			return this->getCustomizationConfigList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetHitResultOutcome QualitycheckClient::getHitResult(const GetHitResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHitResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHitResultOutcome(GetHitResultResult(outcome.result()));
	else
		return GetHitResultOutcome(outcome.error());
}

void QualitycheckClient::getHitResultAsync(const GetHitResultRequest& request, const GetHitResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHitResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetHitResultOutcomeCallable QualitycheckClient::getHitResultCallable(const GetHitResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHitResultOutcome()>>(
			[this, request]()
			{
			return this->getHitResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetNextResultToVerifyOutcome QualitycheckClient::getNextResultToVerify(const GetNextResultToVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNextResultToVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNextResultToVerifyOutcome(GetNextResultToVerifyResult(outcome.result()));
	else
		return GetNextResultToVerifyOutcome(outcome.error());
}

void QualitycheckClient::getNextResultToVerifyAsync(const GetNextResultToVerifyRequest& request, const GetNextResultToVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNextResultToVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetNextResultToVerifyOutcomeCallable QualitycheckClient::getNextResultToVerifyCallable(const GetNextResultToVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNextResultToVerifyOutcome()>>(
			[this, request]()
			{
			return this->getNextResultToVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetPrecisionTaskOutcome QualitycheckClient::getPrecisionTask(const GetPrecisionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrecisionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrecisionTaskOutcome(GetPrecisionTaskResult(outcome.result()));
	else
		return GetPrecisionTaskOutcome(outcome.error());
}

void QualitycheckClient::getPrecisionTaskAsync(const GetPrecisionTaskRequest& request, const GetPrecisionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrecisionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetPrecisionTaskOutcomeCallable QualitycheckClient::getPrecisionTaskCallable(const GetPrecisionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrecisionTaskOutcome()>>(
			[this, request]()
			{
			return this->getPrecisionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetResultOutcome QualitycheckClient::getResult(const GetResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResultOutcome(GetResultResult(outcome.result()));
	else
		return GetResultOutcome(outcome.error());
}

void QualitycheckClient::getResultAsync(const GetResultRequest& request, const GetResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetResultOutcomeCallable QualitycheckClient::getResultCallable(const GetResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResultOutcome()>>(
			[this, request]()
			{
			return this->getResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetResultCallbackOutcome QualitycheckClient::getResultCallback(const GetResultCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResultCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResultCallbackOutcome(GetResultCallbackResult(outcome.result()));
	else
		return GetResultCallbackOutcome(outcome.error());
}

void QualitycheckClient::getResultCallbackAsync(const GetResultCallbackRequest& request, const GetResultCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResultCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetResultCallbackOutcomeCallable QualitycheckClient::getResultCallbackCallable(const GetResultCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResultCallbackOutcome()>>(
			[this, request]()
			{
			return this->getResultCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetResultToReviewOutcome QualitycheckClient::getResultToReview(const GetResultToReviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResultToReviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResultToReviewOutcome(GetResultToReviewResult(outcome.result()));
	else
		return GetResultToReviewOutcome(outcome.error());
}

void QualitycheckClient::getResultToReviewAsync(const GetResultToReviewRequest& request, const GetResultToReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResultToReview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetResultToReviewOutcomeCallable QualitycheckClient::getResultToReviewCallable(const GetResultToReviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResultToReviewOutcome()>>(
			[this, request]()
			{
			return this->getResultToReview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetRuleOutcome QualitycheckClient::getRule(const GetRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleOutcome(GetRuleResult(outcome.result()));
	else
		return GetRuleOutcome(outcome.error());
}

void QualitycheckClient::getRuleAsync(const GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetRuleOutcomeCallable QualitycheckClient::getRuleCallable(const GetRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleOutcome()>>(
			[this, request]()
			{
			return this->getRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetRuleCategoryOutcome QualitycheckClient::getRuleCategory(const GetRuleCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleCategoryOutcome(GetRuleCategoryResult(outcome.result()));
	else
		return GetRuleCategoryOutcome(outcome.error());
}

void QualitycheckClient::getRuleCategoryAsync(const GetRuleCategoryRequest& request, const GetRuleCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRuleCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetRuleCategoryOutcomeCallable QualitycheckClient::getRuleCategoryCallable(const GetRuleCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleCategoryOutcome()>>(
			[this, request]()
			{
			return this->getRuleCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetRuleDetailOutcome QualitycheckClient::getRuleDetail(const GetRuleDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRuleDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRuleDetailOutcome(GetRuleDetailResult(outcome.result()));
	else
		return GetRuleDetailOutcome(outcome.error());
}

void QualitycheckClient::getRuleDetailAsync(const GetRuleDetailRequest& request, const GetRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRuleDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetRuleDetailOutcomeCallable QualitycheckClient::getRuleDetailCallable(const GetRuleDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRuleDetailOutcome()>>(
			[this, request]()
			{
			return this->getRuleDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetScoreInfoOutcome QualitycheckClient::getScoreInfo(const GetScoreInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScoreInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScoreInfoOutcome(GetScoreInfoResult(outcome.result()));
	else
		return GetScoreInfoOutcome(outcome.error());
}

void QualitycheckClient::getScoreInfoAsync(const GetScoreInfoRequest& request, const GetScoreInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScoreInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetScoreInfoOutcomeCallable QualitycheckClient::getScoreInfoCallable(const GetScoreInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScoreInfoOutcome()>>(
			[this, request]()
			{
			return this->getScoreInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetSkillGroupConfigOutcome QualitycheckClient::getSkillGroupConfig(const GetSkillGroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSkillGroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSkillGroupConfigOutcome(GetSkillGroupConfigResult(outcome.result()));
	else
		return GetSkillGroupConfigOutcome(outcome.error());
}

void QualitycheckClient::getSkillGroupConfigAsync(const GetSkillGroupConfigRequest& request, const GetSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSkillGroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetSkillGroupConfigOutcomeCallable QualitycheckClient::getSkillGroupConfigCallable(const GetSkillGroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSkillGroupConfigOutcome()>>(
			[this, request]()
			{
			return this->getSkillGroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetSyncResultOutcome QualitycheckClient::getSyncResult(const GetSyncResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSyncResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSyncResultOutcome(GetSyncResultResult(outcome.result()));
	else
		return GetSyncResultOutcome(outcome.error());
}

void QualitycheckClient::getSyncResultAsync(const GetSyncResultRequest& request, const GetSyncResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSyncResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetSyncResultOutcomeCallable QualitycheckClient::getSyncResultCallable(const GetSyncResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSyncResultOutcome()>>(
			[this, request]()
			{
			return this->getSyncResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::GetThesaurusBySynonymForApiOutcome QualitycheckClient::getThesaurusBySynonymForApi(const GetThesaurusBySynonymForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetThesaurusBySynonymForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetThesaurusBySynonymForApiOutcome(GetThesaurusBySynonymForApiResult(outcome.result()));
	else
		return GetThesaurusBySynonymForApiOutcome(outcome.error());
}

void QualitycheckClient::getThesaurusBySynonymForApiAsync(const GetThesaurusBySynonymForApiRequest& request, const GetThesaurusBySynonymForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getThesaurusBySynonymForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::GetThesaurusBySynonymForApiOutcomeCallable QualitycheckClient::getThesaurusBySynonymForApiCallable(const GetThesaurusBySynonymForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetThesaurusBySynonymForApiOutcome()>>(
			[this, request]()
			{
			return this->getThesaurusBySynonymForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::HandleComplaintOutcome QualitycheckClient::handleComplaint(const HandleComplaintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HandleComplaintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HandleComplaintOutcome(HandleComplaintResult(outcome.result()));
	else
		return HandleComplaintOutcome(outcome.error());
}

void QualitycheckClient::handleComplaintAsync(const HandleComplaintRequest& request, const HandleComplaintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, handleComplaint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::HandleComplaintOutcomeCallable QualitycheckClient::handleComplaintCallable(const HandleComplaintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HandleComplaintOutcome()>>(
			[this, request]()
			{
			return this->handleComplaint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::InsertScoreForApiOutcome QualitycheckClient::insertScoreForApi(const InsertScoreForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertScoreForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertScoreForApiOutcome(InsertScoreForApiResult(outcome.result()));
	else
		return InsertScoreForApiOutcome(outcome.error());
}

void QualitycheckClient::insertScoreForApiAsync(const InsertScoreForApiRequest& request, const InsertScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertScoreForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::InsertScoreForApiOutcomeCallable QualitycheckClient::insertScoreForApiCallable(const InsertScoreForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertScoreForApiOutcome()>>(
			[this, request]()
			{
			return this->insertScoreForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::InsertSubScoreForApiOutcome QualitycheckClient::insertSubScoreForApi(const InsertSubScoreForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertSubScoreForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertSubScoreForApiOutcome(InsertSubScoreForApiResult(outcome.result()));
	else
		return InsertSubScoreForApiOutcome(outcome.error());
}

void QualitycheckClient::insertSubScoreForApiAsync(const InsertSubScoreForApiRequest& request, const InsertSubScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertSubScoreForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::InsertSubScoreForApiOutcomeCallable QualitycheckClient::insertSubScoreForApiCallable(const InsertSubScoreForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertSubScoreForApiOutcome()>>(
			[this, request]()
			{
			return this->insertSubScoreForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::InvalidRuleOutcome QualitycheckClient::invalidRule(const InvalidRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvalidRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvalidRuleOutcome(InvalidRuleResult(outcome.result()));
	else
		return InvalidRuleOutcome(outcome.error());
}

void QualitycheckClient::invalidRuleAsync(const InvalidRuleRequest& request, const InvalidRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invalidRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::InvalidRuleOutcomeCallable QualitycheckClient::invalidRuleCallable(const InvalidRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvalidRuleOutcome()>>(
			[this, request]()
			{
			return this->invalidRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListAsrVocabOutcome QualitycheckClient::listAsrVocab(const ListAsrVocabRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAsrVocabOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAsrVocabOutcome(ListAsrVocabResult(outcome.result()));
	else
		return ListAsrVocabOutcome(outcome.error());
}

void QualitycheckClient::listAsrVocabAsync(const ListAsrVocabRequest& request, const ListAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAsrVocab(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListAsrVocabOutcomeCallable QualitycheckClient::listAsrVocabCallable(const ListAsrVocabRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAsrVocabOutcome()>>(
			[this, request]()
			{
			return this->listAsrVocab(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListBusinessSpacesOutcome QualitycheckClient::listBusinessSpaces(const ListBusinessSpacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBusinessSpacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBusinessSpacesOutcome(ListBusinessSpacesResult(outcome.result()));
	else
		return ListBusinessSpacesOutcome(outcome.error());
}

void QualitycheckClient::listBusinessSpacesAsync(const ListBusinessSpacesRequest& request, const ListBusinessSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBusinessSpaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListBusinessSpacesOutcomeCallable QualitycheckClient::listBusinessSpacesCallable(const ListBusinessSpacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBusinessSpacesOutcome()>>(
			[this, request]()
			{
			return this->listBusinessSpaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListHotWordsTasksOutcome QualitycheckClient::listHotWordsTasks(const ListHotWordsTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHotWordsTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHotWordsTasksOutcome(ListHotWordsTasksResult(outcome.result()));
	else
		return ListHotWordsTasksOutcome(outcome.error());
}

void QualitycheckClient::listHotWordsTasksAsync(const ListHotWordsTasksRequest& request, const ListHotWordsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHotWordsTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListHotWordsTasksOutcomeCallable QualitycheckClient::listHotWordsTasksCallable(const ListHotWordsTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHotWordsTasksOutcome()>>(
			[this, request]()
			{
			return this->listHotWordsTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListPrecisionTaskOutcome QualitycheckClient::listPrecisionTask(const ListPrecisionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrecisionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrecisionTaskOutcome(ListPrecisionTaskResult(outcome.result()));
	else
		return ListPrecisionTaskOutcome(outcome.error());
}

void QualitycheckClient::listPrecisionTaskAsync(const ListPrecisionTaskRequest& request, const ListPrecisionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrecisionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListPrecisionTaskOutcomeCallable QualitycheckClient::listPrecisionTaskCallable(const ListPrecisionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrecisionTaskOutcome()>>(
			[this, request]()
			{
			return this->listPrecisionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListQualityCheckSchemeOutcome QualitycheckClient::listQualityCheckScheme(const ListQualityCheckSchemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQualityCheckSchemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQualityCheckSchemeOutcome(ListQualityCheckSchemeResult(outcome.result()));
	else
		return ListQualityCheckSchemeOutcome(outcome.error());
}

void QualitycheckClient::listQualityCheckSchemeAsync(const ListQualityCheckSchemeRequest& request, const ListQualityCheckSchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQualityCheckScheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListQualityCheckSchemeOutcomeCallable QualitycheckClient::listQualityCheckSchemeCallable(const ListQualityCheckSchemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQualityCheckSchemeOutcome()>>(
			[this, request]()
			{
			return this->listQualityCheckScheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListRolesOutcome QualitycheckClient::listRoles(const ListRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRolesOutcome(ListRolesResult(outcome.result()));
	else
		return ListRolesOutcome(outcome.error());
}

void QualitycheckClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListRolesOutcomeCallable QualitycheckClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListRulesOutcome QualitycheckClient::listRules(const ListRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRulesOutcome(ListRulesResult(outcome.result()));
	else
		return ListRulesOutcome(outcome.error());
}

void QualitycheckClient::listRulesAsync(const ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListRulesOutcomeCallable QualitycheckClient::listRulesCallable(const ListRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRulesOutcome()>>(
			[this, request]()
			{
			return this->listRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListSkillGroupConfigOutcome QualitycheckClient::listSkillGroupConfig(const ListSkillGroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupConfigOutcome(ListSkillGroupConfigResult(outcome.result()));
	else
		return ListSkillGroupConfigOutcome(outcome.error());
}

void QualitycheckClient::listSkillGroupConfigAsync(const ListSkillGroupConfigRequest& request, const ListSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListSkillGroupConfigOutcomeCallable QualitycheckClient::listSkillGroupConfigCallable(const ListSkillGroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupConfigOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListTaskAssignRulesOutcome QualitycheckClient::listTaskAssignRules(const ListTaskAssignRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTaskAssignRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTaskAssignRulesOutcome(ListTaskAssignRulesResult(outcome.result()));
	else
		return ListTaskAssignRulesOutcome(outcome.error());
}

void QualitycheckClient::listTaskAssignRulesAsync(const ListTaskAssignRulesRequest& request, const ListTaskAssignRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTaskAssignRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListTaskAssignRulesOutcomeCallable QualitycheckClient::listTaskAssignRulesCallable(const ListTaskAssignRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTaskAssignRulesOutcome()>>(
			[this, request]()
			{
			return this->listTaskAssignRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListUsersOutcome QualitycheckClient::listUsers(const ListUsersRequest &request) const
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

void QualitycheckClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListUsersOutcomeCallable QualitycheckClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::ListWarningConfigOutcome QualitycheckClient::listWarningConfig(const ListWarningConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWarningConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWarningConfigOutcome(ListWarningConfigResult(outcome.result()));
	else
		return ListWarningConfigOutcome(outcome.error());
}

void QualitycheckClient::listWarningConfigAsync(const ListWarningConfigRequest& request, const ListWarningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWarningConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::ListWarningConfigOutcomeCallable QualitycheckClient::listWarningConfigCallable(const ListWarningConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWarningConfigOutcome()>>(
			[this, request]()
			{
			return this->listWarningConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::RestartAsrTaskOutcome QualitycheckClient::restartAsrTask(const RestartAsrTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartAsrTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartAsrTaskOutcome(RestartAsrTaskResult(outcome.result()));
	else
		return RestartAsrTaskOutcome(outcome.error());
}

void QualitycheckClient::restartAsrTaskAsync(const RestartAsrTaskRequest& request, const RestartAsrTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartAsrTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::RestartAsrTaskOutcomeCallable QualitycheckClient::restartAsrTaskCallable(const RestartAsrTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartAsrTaskOutcome()>>(
			[this, request]()
			{
			return this->restartAsrTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::SaveConfigDataSetOutcome QualitycheckClient::saveConfigDataSet(const SaveConfigDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveConfigDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveConfigDataSetOutcome(SaveConfigDataSetResult(outcome.result()));
	else
		return SaveConfigDataSetOutcome(outcome.error());
}

void QualitycheckClient::saveConfigDataSetAsync(const SaveConfigDataSetRequest& request, const SaveConfigDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveConfigDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::SaveConfigDataSetOutcomeCallable QualitycheckClient::saveConfigDataSetCallable(const SaveConfigDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveConfigDataSetOutcome()>>(
			[this, request]()
			{
			return this->saveConfigDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::SubmitComplaintOutcome QualitycheckClient::submitComplaint(const SubmitComplaintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitComplaintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitComplaintOutcome(SubmitComplaintResult(outcome.result()));
	else
		return SubmitComplaintOutcome(outcome.error());
}

void QualitycheckClient::submitComplaintAsync(const SubmitComplaintRequest& request, const SubmitComplaintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitComplaint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::SubmitComplaintOutcomeCallable QualitycheckClient::submitComplaintCallable(const SubmitComplaintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitComplaintOutcome()>>(
			[this, request]()
			{
			return this->submitComplaint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::SubmitPrecisionTaskOutcome QualitycheckClient::submitPrecisionTask(const SubmitPrecisionTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitPrecisionTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitPrecisionTaskOutcome(SubmitPrecisionTaskResult(outcome.result()));
	else
		return SubmitPrecisionTaskOutcome(outcome.error());
}

void QualitycheckClient::submitPrecisionTaskAsync(const SubmitPrecisionTaskRequest& request, const SubmitPrecisionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitPrecisionTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::SubmitPrecisionTaskOutcomeCallable QualitycheckClient::submitPrecisionTaskCallable(const SubmitPrecisionTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitPrecisionTaskOutcome()>>(
			[this, request]()
			{
			return this->submitPrecisionTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::SubmitQualityCheckTaskOutcome QualitycheckClient::submitQualityCheckTask(const SubmitQualityCheckTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitQualityCheckTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitQualityCheckTaskOutcome(SubmitQualityCheckTaskResult(outcome.result()));
	else
		return SubmitQualityCheckTaskOutcome(outcome.error());
}

void QualitycheckClient::submitQualityCheckTaskAsync(const SubmitQualityCheckTaskRequest& request, const SubmitQualityCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitQualityCheckTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::SubmitQualityCheckTaskOutcomeCallable QualitycheckClient::submitQualityCheckTaskCallable(const SubmitQualityCheckTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitQualityCheckTaskOutcome()>>(
			[this, request]()
			{
			return this->submitQualityCheckTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::SubmitReviewInfoOutcome QualitycheckClient::submitReviewInfo(const SubmitReviewInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitReviewInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitReviewInfoOutcome(SubmitReviewInfoResult(outcome.result()));
	else
		return SubmitReviewInfoOutcome(outcome.error());
}

void QualitycheckClient::submitReviewInfoAsync(const SubmitReviewInfoRequest& request, const SubmitReviewInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitReviewInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::SubmitReviewInfoOutcomeCallable QualitycheckClient::submitReviewInfoCallable(const SubmitReviewInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitReviewInfoOutcome()>>(
			[this, request]()
			{
			return this->submitReviewInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::SyncQualityCheckOutcome QualitycheckClient::syncQualityCheck(const SyncQualityCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncQualityCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncQualityCheckOutcome(SyncQualityCheckResult(outcome.result()));
	else
		return SyncQualityCheckOutcome(outcome.error());
}

void QualitycheckClient::syncQualityCheckAsync(const SyncQualityCheckRequest& request, const SyncQualityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncQualityCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::SyncQualityCheckOutcomeCallable QualitycheckClient::syncQualityCheckCallable(const SyncQualityCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncQualityCheckOutcome()>>(
			[this, request]()
			{
			return this->syncQualityCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateAsrVocabOutcome QualitycheckClient::updateAsrVocab(const UpdateAsrVocabRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAsrVocabOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAsrVocabOutcome(UpdateAsrVocabResult(outcome.result()));
	else
		return UpdateAsrVocabOutcome(outcome.error());
}

void QualitycheckClient::updateAsrVocabAsync(const UpdateAsrVocabRequest& request, const UpdateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAsrVocab(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateAsrVocabOutcomeCallable QualitycheckClient::updateAsrVocabCallable(const UpdateAsrVocabRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAsrVocabOutcome()>>(
			[this, request]()
			{
			return this->updateAsrVocab(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateQualityCheckDataOutcome QualitycheckClient::updateQualityCheckData(const UpdateQualityCheckDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateQualityCheckDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateQualityCheckDataOutcome(UpdateQualityCheckDataResult(outcome.result()));
	else
		return UpdateQualityCheckDataOutcome(outcome.error());
}

void QualitycheckClient::updateQualityCheckDataAsync(const UpdateQualityCheckDataRequest& request, const UpdateQualityCheckDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateQualityCheckData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateQualityCheckDataOutcomeCallable QualitycheckClient::updateQualityCheckDataCallable(const UpdateQualityCheckDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateQualityCheckDataOutcome()>>(
			[this, request]()
			{
			return this->updateQualityCheckData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateRuleOutcome QualitycheckClient::updateRule(const UpdateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRuleOutcome(UpdateRuleResult(outcome.result()));
	else
		return UpdateRuleOutcome(outcome.error());
}

void QualitycheckClient::updateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateRuleOutcomeCallable QualitycheckClient::updateRuleCallable(const UpdateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRuleOutcome()>>(
			[this, request]()
			{
			return this->updateRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateScoreForApiOutcome QualitycheckClient::updateScoreForApi(const UpdateScoreForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateScoreForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateScoreForApiOutcome(UpdateScoreForApiResult(outcome.result()));
	else
		return UpdateScoreForApiOutcome(outcome.error());
}

void QualitycheckClient::updateScoreForApiAsync(const UpdateScoreForApiRequest& request, const UpdateScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateScoreForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateScoreForApiOutcomeCallable QualitycheckClient::updateScoreForApiCallable(const UpdateScoreForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateScoreForApiOutcome()>>(
			[this, request]()
			{
			return this->updateScoreForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateSkillGroupConfigOutcome QualitycheckClient::updateSkillGroupConfig(const UpdateSkillGroupConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSkillGroupConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSkillGroupConfigOutcome(UpdateSkillGroupConfigResult(outcome.result()));
	else
		return UpdateSkillGroupConfigOutcome(outcome.error());
}

void QualitycheckClient::updateSkillGroupConfigAsync(const UpdateSkillGroupConfigRequest& request, const UpdateSkillGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSkillGroupConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateSkillGroupConfigOutcomeCallable QualitycheckClient::updateSkillGroupConfigCallable(const UpdateSkillGroupConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSkillGroupConfigOutcome()>>(
			[this, request]()
			{
			return this->updateSkillGroupConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateSubScoreForApiOutcome QualitycheckClient::updateSubScoreForApi(const UpdateSubScoreForApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSubScoreForApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSubScoreForApiOutcome(UpdateSubScoreForApiResult(outcome.result()));
	else
		return UpdateSubScoreForApiOutcome(outcome.error());
}

void QualitycheckClient::updateSubScoreForApiAsync(const UpdateSubScoreForApiRequest& request, const UpdateSubScoreForApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSubScoreForApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateSubScoreForApiOutcomeCallable QualitycheckClient::updateSubScoreForApiCallable(const UpdateSubScoreForApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSubScoreForApiOutcome()>>(
			[this, request]()
			{
			return this->updateSubScoreForApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateSyncQualityCheckDataOutcome QualitycheckClient::updateSyncQualityCheckData(const UpdateSyncQualityCheckDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSyncQualityCheckDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSyncQualityCheckDataOutcome(UpdateSyncQualityCheckDataResult(outcome.result()));
	else
		return UpdateSyncQualityCheckDataOutcome(outcome.error());
}

void QualitycheckClient::updateSyncQualityCheckDataAsync(const UpdateSyncQualityCheckDataRequest& request, const UpdateSyncQualityCheckDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSyncQualityCheckData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateSyncQualityCheckDataOutcomeCallable QualitycheckClient::updateSyncQualityCheckDataCallable(const UpdateSyncQualityCheckDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSyncQualityCheckDataOutcome()>>(
			[this, request]()
			{
			return this->updateSyncQualityCheckData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateTaskAssignRuleOutcome QualitycheckClient::updateTaskAssignRule(const UpdateTaskAssignRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskAssignRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskAssignRuleOutcome(UpdateTaskAssignRuleResult(outcome.result()));
	else
		return UpdateTaskAssignRuleOutcome(outcome.error());
}

void QualitycheckClient::updateTaskAssignRuleAsync(const UpdateTaskAssignRuleRequest& request, const UpdateTaskAssignRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskAssignRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateTaskAssignRuleOutcomeCallable QualitycheckClient::updateTaskAssignRuleCallable(const UpdateTaskAssignRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskAssignRuleOutcome()>>(
			[this, request]()
			{
			return this->updateTaskAssignRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateUserOutcome QualitycheckClient::updateUser(const UpdateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserOutcome(UpdateUserResult(outcome.result()));
	else
		return UpdateUserOutcome(outcome.error());
}

void QualitycheckClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateUserOutcomeCallable QualitycheckClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateUserConfigOutcome QualitycheckClient::updateUserConfig(const UpdateUserConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserConfigOutcome(UpdateUserConfigResult(outcome.result()));
	else
		return UpdateUserConfigOutcome(outcome.error());
}

void QualitycheckClient::updateUserConfigAsync(const UpdateUserConfigRequest& request, const UpdateUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateUserConfigOutcomeCallable QualitycheckClient::updateUserConfigCallable(const UpdateUserConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserConfigOutcome()>>(
			[this, request]()
			{
			return this->updateUserConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UpdateWarningConfigOutcome QualitycheckClient::updateWarningConfig(const UpdateWarningConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWarningConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWarningConfigOutcome(UpdateWarningConfigResult(outcome.result()));
	else
		return UpdateWarningConfigOutcome(outcome.error());
}

void QualitycheckClient::updateWarningConfigAsync(const UpdateWarningConfigRequest& request, const UpdateWarningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWarningConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UpdateWarningConfigOutcomeCallable QualitycheckClient::updateWarningConfigCallable(const UpdateWarningConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWarningConfigOutcome()>>(
			[this, request]()
			{
			return this->updateWarningConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UploadAudioDataOutcome QualitycheckClient::uploadAudioData(const UploadAudioDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadAudioDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadAudioDataOutcome(UploadAudioDataResult(outcome.result()));
	else
		return UploadAudioDataOutcome(outcome.error());
}

void QualitycheckClient::uploadAudioDataAsync(const UploadAudioDataRequest& request, const UploadAudioDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadAudioData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UploadAudioDataOutcomeCallable QualitycheckClient::uploadAudioDataCallable(const UploadAudioDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadAudioDataOutcome()>>(
			[this, request]()
			{
			return this->uploadAudioData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UploadDataOutcome QualitycheckClient::uploadData(const UploadDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadDataOutcome(UploadDataResult(outcome.result()));
	else
		return UploadDataOutcome(outcome.error());
}

void QualitycheckClient::uploadDataAsync(const UploadDataRequest& request, const UploadDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UploadDataOutcomeCallable QualitycheckClient::uploadDataCallable(const UploadDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadDataOutcome()>>(
			[this, request]()
			{
			return this->uploadData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UploadDataSyncOutcome QualitycheckClient::uploadDataSync(const UploadDataSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadDataSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadDataSyncOutcome(UploadDataSyncResult(outcome.result()));
	else
		return UploadDataSyncOutcome(outcome.error());
}

void QualitycheckClient::uploadDataSyncAsync(const UploadDataSyncRequest& request, const UploadDataSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadDataSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UploadDataSyncOutcomeCallable QualitycheckClient::uploadDataSyncCallable(const UploadDataSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadDataSyncOutcome()>>(
			[this, request]()
			{
			return this->uploadDataSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::UploadRuleOutcome QualitycheckClient::uploadRule(const UploadRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadRuleOutcome(UploadRuleResult(outcome.result()));
	else
		return UploadRuleOutcome(outcome.error());
}

void QualitycheckClient::uploadRuleAsync(const UploadRuleRequest& request, const UploadRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::UploadRuleOutcomeCallable QualitycheckClient::uploadRuleCallable(const UploadRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadRuleOutcome()>>(
			[this, request]()
			{
			return this->uploadRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::VerifyFileOutcome QualitycheckClient::verifyFile(const VerifyFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyFileOutcome(VerifyFileResult(outcome.result()));
	else
		return VerifyFileOutcome(outcome.error());
}

void QualitycheckClient::verifyFileAsync(const VerifyFileRequest& request, const VerifyFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::VerifyFileOutcomeCallable QualitycheckClient::verifyFileCallable(const VerifyFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyFileOutcome()>>(
			[this, request]()
			{
			return this->verifyFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

QualitycheckClient::VerifySentenceOutcome QualitycheckClient::verifySentence(const VerifySentenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifySentenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifySentenceOutcome(VerifySentenceResult(outcome.result()));
	else
		return VerifySentenceOutcome(outcome.error());
}

void QualitycheckClient::verifySentenceAsync(const VerifySentenceRequest& request, const VerifySentenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifySentence(request), context);
	};

	asyncExecute(new Runnable(fn));
}

QualitycheckClient::VerifySentenceOutcomeCallable QualitycheckClient::verifySentenceCallable(const VerifySentenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifySentenceOutcome()>>(
			[this, request]()
			{
			return this->verifySentence(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

