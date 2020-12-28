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

#ifndef ALIBABACLOUD_NLP_AUTOML_NLP_AUTOMLCLIENT_H_
#define ALIBABACLOUD_NLP_AUTOML_NLP_AUTOMLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Nlp_automlExport.h"
#include "model/AddMTInterveneWordRequest.h"
#include "model/AddMTInterveneWordResult.h"
#include "model/AddMtIntervenePackageRequest.h"
#include "model/AddMtIntervenePackageResult.h"
#include "model/BindIntervenePackageAndModelRequest.h"
#include "model/BindIntervenePackageAndModelResult.h"
#include "model/CreateAsyncPredictRequest.h"
#include "model/CreateAsyncPredictResult.h"
#include "model/CreateDatasetRequest.h"
#include "model/CreateDatasetResult.h"
#include "model/CreateDatasetRecordRequest.h"
#include "model/CreateDatasetRecordResult.h"
#include "model/CreateModelRequest.h"
#include "model/CreateModelResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/DeleteModelRequest.h"
#include "model/DeleteModelResult.h"
#include "model/DeployModelRequest.h"
#include "model/DeployModelResult.h"
#include "model/GetAsyncPredictRequest.h"
#include "model/GetAsyncPredictResult.h"
#include "model/GetModelRequest.h"
#include "model/GetModelResult.h"
#include "model/GetPredictDocRequest.h"
#include "model/GetPredictDocResult.h"
#include "model/GetPredictResultRequest.h"
#include "model/GetPredictResultResult.h"
#include "model/InvokeActionRequest.h"
#include "model/InvokeActionResult.h"
#include "model/ListDatasetRequest.h"
#include "model/ListDatasetResult.h"
#include "model/ListModelsRequest.h"
#include "model/ListModelsResult.h"
#include "model/PredictMTModelRequest.h"
#include "model/PredictMTModelResult.h"
#include "model/PredictMTModelByDocRequest.h"
#include "model/PredictMTModelByDocResult.h"
#include "model/RunContactReviewRequest.h"
#include "model/RunContactReviewResult.h"
#include "model/RunPreTrainServiceRequest.h"
#include "model/RunPreTrainServiceResult.h"
#include "model/RunSmartCallServiceRequest.h"
#include "model/RunSmartCallServiceResult.h"


namespace AlibabaCloud
{
	namespace Nlp_automl
	{
		class ALIBABACLOUD_NLP_AUTOML_EXPORT Nlp_automlClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddMTInterveneWordResult> AddMTInterveneWordOutcome;
			typedef std::future<AddMTInterveneWordOutcome> AddMTInterveneWordOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::AddMTInterveneWordRequest&, const AddMTInterveneWordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMTInterveneWordAsyncHandler;
			typedef Outcome<Error, Model::AddMtIntervenePackageResult> AddMtIntervenePackageOutcome;
			typedef std::future<AddMtIntervenePackageOutcome> AddMtIntervenePackageOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::AddMtIntervenePackageRequest&, const AddMtIntervenePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMtIntervenePackageAsyncHandler;
			typedef Outcome<Error, Model::BindIntervenePackageAndModelResult> BindIntervenePackageAndModelOutcome;
			typedef std::future<BindIntervenePackageAndModelOutcome> BindIntervenePackageAndModelOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::BindIntervenePackageAndModelRequest&, const BindIntervenePackageAndModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindIntervenePackageAndModelAsyncHandler;
			typedef Outcome<Error, Model::CreateAsyncPredictResult> CreateAsyncPredictOutcome;
			typedef std::future<CreateAsyncPredictOutcome> CreateAsyncPredictOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::CreateAsyncPredictRequest&, const CreateAsyncPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsyncPredictAsyncHandler;
			typedef Outcome<Error, Model::CreateDatasetResult> CreateDatasetOutcome;
			typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::CreateDatasetRequest&, const CreateDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetAsyncHandler;
			typedef Outcome<Error, Model::CreateDatasetRecordResult> CreateDatasetRecordOutcome;
			typedef std::future<CreateDatasetRecordOutcome> CreateDatasetRecordOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::CreateDatasetRecordRequest&, const CreateDatasetRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetRecordAsyncHandler;
			typedef Outcome<Error, Model::CreateModelResult> CreateModelOutcome;
			typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::CreateModelRequest&, const CreateModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteModelResult> DeleteModelOutcome;
			typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::DeleteModelRequest&, const DeleteModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
			typedef Outcome<Error, Model::DeployModelResult> DeployModelOutcome;
			typedef std::future<DeployModelOutcome> DeployModelOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::DeployModelRequest&, const DeployModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployModelAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncPredictResult> GetAsyncPredictOutcome;
			typedef std::future<GetAsyncPredictOutcome> GetAsyncPredictOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::GetAsyncPredictRequest&, const GetAsyncPredictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncPredictAsyncHandler;
			typedef Outcome<Error, Model::GetModelResult> GetModelOutcome;
			typedef std::future<GetModelOutcome> GetModelOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::GetModelRequest&, const GetModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelAsyncHandler;
			typedef Outcome<Error, Model::GetPredictDocResult> GetPredictDocOutcome;
			typedef std::future<GetPredictDocOutcome> GetPredictDocOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::GetPredictDocRequest&, const GetPredictDocOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPredictDocAsyncHandler;
			typedef Outcome<Error, Model::GetPredictResultResult> GetPredictResultOutcome;
			typedef std::future<GetPredictResultOutcome> GetPredictResultOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::GetPredictResultRequest&, const GetPredictResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPredictResultAsyncHandler;
			typedef Outcome<Error, Model::InvokeActionResult> InvokeActionOutcome;
			typedef std::future<InvokeActionOutcome> InvokeActionOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::InvokeActionRequest&, const InvokeActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeActionAsyncHandler;
			typedef Outcome<Error, Model::ListDatasetResult> ListDatasetOutcome;
			typedef std::future<ListDatasetOutcome> ListDatasetOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::ListDatasetRequest&, const ListDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatasetAsyncHandler;
			typedef Outcome<Error, Model::ListModelsResult> ListModelsOutcome;
			typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::ListModelsRequest&, const ListModelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListModelsAsyncHandler;
			typedef Outcome<Error, Model::PredictMTModelResult> PredictMTModelOutcome;
			typedef std::future<PredictMTModelOutcome> PredictMTModelOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::PredictMTModelRequest&, const PredictMTModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictMTModelAsyncHandler;
			typedef Outcome<Error, Model::PredictMTModelByDocResult> PredictMTModelByDocOutcome;
			typedef std::future<PredictMTModelByDocOutcome> PredictMTModelByDocOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::PredictMTModelByDocRequest&, const PredictMTModelByDocOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PredictMTModelByDocAsyncHandler;
			typedef Outcome<Error, Model::RunContactReviewResult> RunContactReviewOutcome;
			typedef std::future<RunContactReviewOutcome> RunContactReviewOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::RunContactReviewRequest&, const RunContactReviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunContactReviewAsyncHandler;
			typedef Outcome<Error, Model::RunPreTrainServiceResult> RunPreTrainServiceOutcome;
			typedef std::future<RunPreTrainServiceOutcome> RunPreTrainServiceOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::RunPreTrainServiceRequest&, const RunPreTrainServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunPreTrainServiceAsyncHandler;
			typedef Outcome<Error, Model::RunSmartCallServiceResult> RunSmartCallServiceOutcome;
			typedef std::future<RunSmartCallServiceOutcome> RunSmartCallServiceOutcomeCallable;
			typedef std::function<void(const Nlp_automlClient*, const Model::RunSmartCallServiceRequest&, const RunSmartCallServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunSmartCallServiceAsyncHandler;

			Nlp_automlClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Nlp_automlClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Nlp_automlClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Nlp_automlClient();
			AddMTInterveneWordOutcome addMTInterveneWord(const Model::AddMTInterveneWordRequest &request)const;
			void addMTInterveneWordAsync(const Model::AddMTInterveneWordRequest& request, const AddMTInterveneWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMTInterveneWordOutcomeCallable addMTInterveneWordCallable(const Model::AddMTInterveneWordRequest& request) const;
			AddMtIntervenePackageOutcome addMtIntervenePackage(const Model::AddMtIntervenePackageRequest &request)const;
			void addMtIntervenePackageAsync(const Model::AddMtIntervenePackageRequest& request, const AddMtIntervenePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMtIntervenePackageOutcomeCallable addMtIntervenePackageCallable(const Model::AddMtIntervenePackageRequest& request) const;
			BindIntervenePackageAndModelOutcome bindIntervenePackageAndModel(const Model::BindIntervenePackageAndModelRequest &request)const;
			void bindIntervenePackageAndModelAsync(const Model::BindIntervenePackageAndModelRequest& request, const BindIntervenePackageAndModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindIntervenePackageAndModelOutcomeCallable bindIntervenePackageAndModelCallable(const Model::BindIntervenePackageAndModelRequest& request) const;
			CreateAsyncPredictOutcome createAsyncPredict(const Model::CreateAsyncPredictRequest &request)const;
			void createAsyncPredictAsync(const Model::CreateAsyncPredictRequest& request, const CreateAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAsyncPredictOutcomeCallable createAsyncPredictCallable(const Model::CreateAsyncPredictRequest& request) const;
			CreateDatasetOutcome createDataset(const Model::CreateDatasetRequest &request)const;
			void createDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatasetOutcomeCallable createDatasetCallable(const Model::CreateDatasetRequest& request) const;
			CreateDatasetRecordOutcome createDatasetRecord(const Model::CreateDatasetRecordRequest &request)const;
			void createDatasetRecordAsync(const Model::CreateDatasetRecordRequest& request, const CreateDatasetRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatasetRecordOutcomeCallable createDatasetRecordCallable(const Model::CreateDatasetRecordRequest& request) const;
			CreateModelOutcome createModel(const Model::CreateModelRequest &request)const;
			void createModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateModelOutcomeCallable createModelCallable(const Model::CreateModelRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			DeleteModelOutcome deleteModel(const Model::DeleteModelRequest &request)const;
			void deleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteModelOutcomeCallable deleteModelCallable(const Model::DeleteModelRequest& request) const;
			DeployModelOutcome deployModel(const Model::DeployModelRequest &request)const;
			void deployModelAsync(const Model::DeployModelRequest& request, const DeployModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployModelOutcomeCallable deployModelCallable(const Model::DeployModelRequest& request) const;
			GetAsyncPredictOutcome getAsyncPredict(const Model::GetAsyncPredictRequest &request)const;
			void getAsyncPredictAsync(const Model::GetAsyncPredictRequest& request, const GetAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncPredictOutcomeCallable getAsyncPredictCallable(const Model::GetAsyncPredictRequest& request) const;
			GetModelOutcome getModel(const Model::GetModelRequest &request)const;
			void getModelAsync(const Model::GetModelRequest& request, const GetModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelOutcomeCallable getModelCallable(const Model::GetModelRequest& request) const;
			GetPredictDocOutcome getPredictDoc(const Model::GetPredictDocRequest &request)const;
			void getPredictDocAsync(const Model::GetPredictDocRequest& request, const GetPredictDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPredictDocOutcomeCallable getPredictDocCallable(const Model::GetPredictDocRequest& request) const;
			GetPredictResultOutcome getPredictResult(const Model::GetPredictResultRequest &request)const;
			void getPredictResultAsync(const Model::GetPredictResultRequest& request, const GetPredictResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPredictResultOutcomeCallable getPredictResultCallable(const Model::GetPredictResultRequest& request) const;
			InvokeActionOutcome invokeAction(const Model::InvokeActionRequest &request)const;
			void invokeActionAsync(const Model::InvokeActionRequest& request, const InvokeActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeActionOutcomeCallable invokeActionCallable(const Model::InvokeActionRequest& request) const;
			ListDatasetOutcome listDataset(const Model::ListDatasetRequest &request)const;
			void listDatasetAsync(const Model::ListDatasetRequest& request, const ListDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatasetOutcomeCallable listDatasetCallable(const Model::ListDatasetRequest& request) const;
			ListModelsOutcome listModels(const Model::ListModelsRequest &request)const;
			void listModelsAsync(const Model::ListModelsRequest& request, const ListModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListModelsOutcomeCallable listModelsCallable(const Model::ListModelsRequest& request) const;
			PredictMTModelOutcome predictMTModel(const Model::PredictMTModelRequest &request)const;
			void predictMTModelAsync(const Model::PredictMTModelRequest& request, const PredictMTModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictMTModelOutcomeCallable predictMTModelCallable(const Model::PredictMTModelRequest& request) const;
			PredictMTModelByDocOutcome predictMTModelByDoc(const Model::PredictMTModelByDocRequest &request)const;
			void predictMTModelByDocAsync(const Model::PredictMTModelByDocRequest& request, const PredictMTModelByDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PredictMTModelByDocOutcomeCallable predictMTModelByDocCallable(const Model::PredictMTModelByDocRequest& request) const;
			RunContactReviewOutcome runContactReview(const Model::RunContactReviewRequest &request)const;
			void runContactReviewAsync(const Model::RunContactReviewRequest& request, const RunContactReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunContactReviewOutcomeCallable runContactReviewCallable(const Model::RunContactReviewRequest& request) const;
			RunPreTrainServiceOutcome runPreTrainService(const Model::RunPreTrainServiceRequest &request)const;
			void runPreTrainServiceAsync(const Model::RunPreTrainServiceRequest& request, const RunPreTrainServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunPreTrainServiceOutcomeCallable runPreTrainServiceCallable(const Model::RunPreTrainServiceRequest& request) const;
			RunSmartCallServiceOutcome runSmartCallService(const Model::RunSmartCallServiceRequest &request)const;
			void runSmartCallServiceAsync(const Model::RunSmartCallServiceRequest& request, const RunSmartCallServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunSmartCallServiceOutcomeCallable runSmartCallServiceCallable(const Model::RunSmartCallServiceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_NLP_AUTOML_NLP_AUTOMLCLIENT_H_
