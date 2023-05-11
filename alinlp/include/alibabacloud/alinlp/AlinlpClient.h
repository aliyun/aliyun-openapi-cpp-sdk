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

#ifndef ALIBABACLOUD_ALINLP_ALINLPCLIENT_H_
#define ALIBABACLOUD_ALINLP_ALINLPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AlinlpExport.h"
#include "model/ADClockRequest.h"
#include "model/ADClockResult.h"
#include "model/ADMMURequest.h"
#include "model/ADMMUResult.h"
#include "model/ADMiniCogRequest.h"
#include "model/ADMiniCogResult.h"
#include "model/ADMiniCogResultRequest.h"
#include "model/ADMiniCogResultResult.h"
#include "model/GetBrandChEcomRequest.h"
#include "model/GetBrandChEcomResult.h"
#include "model/GetCateChEcomRequest.h"
#include "model/GetCateChEcomResult.h"
#include "model/GetCheckDuplicationChMedicalRequest.h"
#include "model/GetCheckDuplicationChMedicalResult.h"
#include "model/GetDiagnosisChMedicalRequest.h"
#include "model/GetDiagnosisChMedicalResult.h"
#include "model/GetDpChEcomRequest.h"
#include "model/GetDpChEcomResult.h"
#include "model/GetDpChGeneralCTBRequest.h"
#include "model/GetDpChGeneralCTBResult.h"
#include "model/GetDpChGeneralStanfordRequest.h"
#include "model/GetDpChGeneralStanfordResult.h"
#include "model/GetEcChGeneralRequest.h"
#include "model/GetEcChGeneralResult.h"
#include "model/GetEcEnGeneralRequest.h"
#include "model/GetEcEnGeneralResult.h"
#include "model/GetEmbeddingRequest.h"
#include "model/GetEmbeddingResult.h"
#include "model/GetItemPubChEcomRequest.h"
#include "model/GetItemPubChEcomResult.h"
#include "model/GetKeywordChEcomRequest.h"
#include "model/GetKeywordChEcomResult.h"
#include "model/GetKeywordEnEcomRequest.h"
#include "model/GetKeywordEnEcomResult.h"
#include "model/GetMedicineChMedicalRequest.h"
#include "model/GetMedicineChMedicalResult.h"
#include "model/GetNerChEcomRequest.h"
#include "model/GetNerChEcomResult.h"
#include "model/GetNerChMedicalRequest.h"
#include "model/GetNerChMedicalResult.h"
#include "model/GetNerCustomizedChEcomRequest.h"
#include "model/GetNerCustomizedChEcomResult.h"
#include "model/GetNerCustomizedSeaEcomRequest.h"
#include "model/GetNerCustomizedSeaEcomResult.h"
#include "model/GetOpenNLURequest.h"
#include "model/GetOpenNLUResult.h"
#include "model/GetOpenNLUHighRecallRequest.h"
#include "model/GetOpenNLUHighRecallResult.h"
#include "model/GetOperationChMedicalRequest.h"
#include "model/GetOperationChMedicalResult.h"
#include "model/GetPosChEcomRequest.h"
#include "model/GetPosChEcomResult.h"
#include "model/GetPosChGeneralRequest.h"
#include "model/GetPosChGeneralResult.h"
#include "model/GetPriceChEcomRequest.h"
#include "model/GetPriceChEcomResult.h"
#include "model/GetSSETestRequest.h"
#include "model/GetSSETestResult.h"
#include "model/GetSaChGeneralRequest.h"
#include "model/GetSaChGeneralResult.h"
#include "model/GetSaSeaEcomRequest.h"
#include "model/GetSaSeaEcomResult.h"
#include "model/GetSimilarityChMedicalRequest.h"
#include "model/GetSimilarityChMedicalResult.h"
#include "model/GetSummaryChEcomRequest.h"
#include "model/GetSummaryChEcomResult.h"
#include "model/GetTableQAServiceInfoByIdRequest.h"
#include "model/GetTableQAServiceInfoByIdResult.h"
#include "model/GetTcChEcomRequest.h"
#include "model/GetTcChEcomResult.h"
#include "model/GetTcChGeneralRequest.h"
#include "model/GetTcChGeneralResult.h"
#include "model/GetTsChEcomRequest.h"
#include "model/GetTsChEcomResult.h"
#include "model/GetUserUploadSignRequest.h"
#include "model/GetUserUploadSignResult.h"
#include "model/GetWeChCommentRequest.h"
#include "model/GetWeChCommentResult.h"
#include "model/GetWeChEcomRequest.h"
#include "model/GetWeChEcomResult.h"
#include "model/GetWeChEntertainmentRequest.h"
#include "model/GetWeChEntertainmentResult.h"
#include "model/GetWeChGeneralRequest.h"
#include "model/GetWeChGeneralResult.h"
#include "model/GetWeChSearchRequest.h"
#include "model/GetWeChSearchResult.h"
#include "model/GetWsChGeneralRequest.h"
#include "model/GetWsChGeneralResult.h"
#include "model/GetWsCustomizedChEcomCommentRequest.h"
#include "model/GetWsCustomizedChEcomCommentResult.h"
#include "model/GetWsCustomizedChEcomContentRequest.h"
#include "model/GetWsCustomizedChEcomContentResult.h"
#include "model/GetWsCustomizedChEcomTitleRequest.h"
#include "model/GetWsCustomizedChEcomTitleResult.h"
#include "model/GetWsCustomizedChEntertainmentRequest.h"
#include "model/GetWsCustomizedChEntertainmentResult.h"
#include "model/GetWsCustomizedChGeneralRequest.h"
#include "model/GetWsCustomizedChGeneralResult.h"
#include "model/GetWsCustomizedChO2ORequest.h"
#include "model/GetWsCustomizedChO2OResult.h"
#include "model/GetWsCustomizedSeaEcomRequest.h"
#include "model/GetWsCustomizedSeaEcomResult.h"
#include "model/GetWsCustomizedSeaGeneralRequest.h"
#include "model/GetWsCustomizedSeaGeneralResult.h"
#include "model/InsertCustomRequest.h"
#include "model/InsertCustomResult.h"
#include "model/OpenAlinlpServiceRequest.h"
#include "model/OpenAlinlpServiceResult.h"
#include "model/RequestTableQARequest.h"
#include "model/RequestTableQAResult.h"
#include "model/RequestTableQAOnlineRequest.h"
#include "model/RequestTableQAOnlineResult.h"


namespace AlibabaCloud
{
	namespace Alinlp
	{
		class ALIBABACLOUD_ALINLP_EXPORT AlinlpClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ADClockResult> ADClockOutcome;
			typedef std::future<ADClockOutcome> ADClockOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::ADClockRequest&, const ADClockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ADClockAsyncHandler;
			typedef Outcome<Error, Model::ADMMUResult> ADMMUOutcome;
			typedef std::future<ADMMUOutcome> ADMMUOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::ADMMURequest&, const ADMMUOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ADMMUAsyncHandler;
			typedef Outcome<Error, Model::ADMiniCogResult> ADMiniCogOutcome;
			typedef std::future<ADMiniCogOutcome> ADMiniCogOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::ADMiniCogRequest&, const ADMiniCogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ADMiniCogAsyncHandler;
			typedef Outcome<Error, Model::ADMiniCogResultResult> ADMiniCogResultOutcome;
			typedef std::future<ADMiniCogResultOutcome> ADMiniCogResultOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::ADMiniCogResultRequest&, const ADMiniCogResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ADMiniCogResultAsyncHandler;
			typedef Outcome<Error, Model::GetBrandChEcomResult> GetBrandChEcomOutcome;
			typedef std::future<GetBrandChEcomOutcome> GetBrandChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetBrandChEcomRequest&, const GetBrandChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBrandChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetCateChEcomResult> GetCateChEcomOutcome;
			typedef std::future<GetCateChEcomOutcome> GetCateChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetCateChEcomRequest&, const GetCateChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCateChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetCheckDuplicationChMedicalResult> GetCheckDuplicationChMedicalOutcome;
			typedef std::future<GetCheckDuplicationChMedicalOutcome> GetCheckDuplicationChMedicalOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetCheckDuplicationChMedicalRequest&, const GetCheckDuplicationChMedicalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckDuplicationChMedicalAsyncHandler;
			typedef Outcome<Error, Model::GetDiagnosisChMedicalResult> GetDiagnosisChMedicalOutcome;
			typedef std::future<GetDiagnosisChMedicalOutcome> GetDiagnosisChMedicalOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetDiagnosisChMedicalRequest&, const GetDiagnosisChMedicalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDiagnosisChMedicalAsyncHandler;
			typedef Outcome<Error, Model::GetDpChEcomResult> GetDpChEcomOutcome;
			typedef std::future<GetDpChEcomOutcome> GetDpChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetDpChEcomRequest&, const GetDpChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDpChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetDpChGeneralCTBResult> GetDpChGeneralCTBOutcome;
			typedef std::future<GetDpChGeneralCTBOutcome> GetDpChGeneralCTBOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetDpChGeneralCTBRequest&, const GetDpChGeneralCTBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDpChGeneralCTBAsyncHandler;
			typedef Outcome<Error, Model::GetDpChGeneralStanfordResult> GetDpChGeneralStanfordOutcome;
			typedef std::future<GetDpChGeneralStanfordOutcome> GetDpChGeneralStanfordOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetDpChGeneralStanfordRequest&, const GetDpChGeneralStanfordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDpChGeneralStanfordAsyncHandler;
			typedef Outcome<Error, Model::GetEcChGeneralResult> GetEcChGeneralOutcome;
			typedef std::future<GetEcChGeneralOutcome> GetEcChGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetEcChGeneralRequest&, const GetEcChGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEcChGeneralAsyncHandler;
			typedef Outcome<Error, Model::GetEcEnGeneralResult> GetEcEnGeneralOutcome;
			typedef std::future<GetEcEnGeneralOutcome> GetEcEnGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetEcEnGeneralRequest&, const GetEcEnGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEcEnGeneralAsyncHandler;
			typedef Outcome<Error, Model::GetEmbeddingResult> GetEmbeddingOutcome;
			typedef std::future<GetEmbeddingOutcome> GetEmbeddingOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetEmbeddingRequest&, const GetEmbeddingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEmbeddingAsyncHandler;
			typedef Outcome<Error, Model::GetItemPubChEcomResult> GetItemPubChEcomOutcome;
			typedef std::future<GetItemPubChEcomOutcome> GetItemPubChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetItemPubChEcomRequest&, const GetItemPubChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetItemPubChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetKeywordChEcomResult> GetKeywordChEcomOutcome;
			typedef std::future<GetKeywordChEcomOutcome> GetKeywordChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetKeywordChEcomRequest&, const GetKeywordChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetKeywordChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetKeywordEnEcomResult> GetKeywordEnEcomOutcome;
			typedef std::future<GetKeywordEnEcomOutcome> GetKeywordEnEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetKeywordEnEcomRequest&, const GetKeywordEnEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetKeywordEnEcomAsyncHandler;
			typedef Outcome<Error, Model::GetMedicineChMedicalResult> GetMedicineChMedicalOutcome;
			typedef std::future<GetMedicineChMedicalOutcome> GetMedicineChMedicalOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetMedicineChMedicalRequest&, const GetMedicineChMedicalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMedicineChMedicalAsyncHandler;
			typedef Outcome<Error, Model::GetNerChEcomResult> GetNerChEcomOutcome;
			typedef std::future<GetNerChEcomOutcome> GetNerChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetNerChEcomRequest&, const GetNerChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNerChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetNerChMedicalResult> GetNerChMedicalOutcome;
			typedef std::future<GetNerChMedicalOutcome> GetNerChMedicalOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetNerChMedicalRequest&, const GetNerChMedicalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNerChMedicalAsyncHandler;
			typedef Outcome<Error, Model::GetNerCustomizedChEcomResult> GetNerCustomizedChEcomOutcome;
			typedef std::future<GetNerCustomizedChEcomOutcome> GetNerCustomizedChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetNerCustomizedChEcomRequest&, const GetNerCustomizedChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNerCustomizedChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetNerCustomizedSeaEcomResult> GetNerCustomizedSeaEcomOutcome;
			typedef std::future<GetNerCustomizedSeaEcomOutcome> GetNerCustomizedSeaEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetNerCustomizedSeaEcomRequest&, const GetNerCustomizedSeaEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNerCustomizedSeaEcomAsyncHandler;
			typedef Outcome<Error, Model::GetOpenNLUResult> GetOpenNLUOutcome;
			typedef std::future<GetOpenNLUOutcome> GetOpenNLUOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetOpenNLURequest&, const GetOpenNLUOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpenNLUAsyncHandler;
			typedef Outcome<Error, Model::GetOpenNLUHighRecallResult> GetOpenNLUHighRecallOutcome;
			typedef std::future<GetOpenNLUHighRecallOutcome> GetOpenNLUHighRecallOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetOpenNLUHighRecallRequest&, const GetOpenNLUHighRecallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpenNLUHighRecallAsyncHandler;
			typedef Outcome<Error, Model::GetOperationChMedicalResult> GetOperationChMedicalOutcome;
			typedef std::future<GetOperationChMedicalOutcome> GetOperationChMedicalOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetOperationChMedicalRequest&, const GetOperationChMedicalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOperationChMedicalAsyncHandler;
			typedef Outcome<Error, Model::GetPosChEcomResult> GetPosChEcomOutcome;
			typedef std::future<GetPosChEcomOutcome> GetPosChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetPosChEcomRequest&, const GetPosChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPosChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetPosChGeneralResult> GetPosChGeneralOutcome;
			typedef std::future<GetPosChGeneralOutcome> GetPosChGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetPosChGeneralRequest&, const GetPosChGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPosChGeneralAsyncHandler;
			typedef Outcome<Error, Model::GetPriceChEcomResult> GetPriceChEcomOutcome;
			typedef std::future<GetPriceChEcomOutcome> GetPriceChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetPriceChEcomRequest&, const GetPriceChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPriceChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetSSETestResult> GetSSETestOutcome;
			typedef std::future<GetSSETestOutcome> GetSSETestOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetSSETestRequest&, const GetSSETestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSSETestAsyncHandler;
			typedef Outcome<Error, Model::GetSaChGeneralResult> GetSaChGeneralOutcome;
			typedef std::future<GetSaChGeneralOutcome> GetSaChGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetSaChGeneralRequest&, const GetSaChGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSaChGeneralAsyncHandler;
			typedef Outcome<Error, Model::GetSaSeaEcomResult> GetSaSeaEcomOutcome;
			typedef std::future<GetSaSeaEcomOutcome> GetSaSeaEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetSaSeaEcomRequest&, const GetSaSeaEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSaSeaEcomAsyncHandler;
			typedef Outcome<Error, Model::GetSimilarityChMedicalResult> GetSimilarityChMedicalOutcome;
			typedef std::future<GetSimilarityChMedicalOutcome> GetSimilarityChMedicalOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetSimilarityChMedicalRequest&, const GetSimilarityChMedicalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSimilarityChMedicalAsyncHandler;
			typedef Outcome<Error, Model::GetSummaryChEcomResult> GetSummaryChEcomOutcome;
			typedef std::future<GetSummaryChEcomOutcome> GetSummaryChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetSummaryChEcomRequest&, const GetSummaryChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSummaryChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetTableQAServiceInfoByIdResult> GetTableQAServiceInfoByIdOutcome;
			typedef std::future<GetTableQAServiceInfoByIdOutcome> GetTableQAServiceInfoByIdOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetTableQAServiceInfoByIdRequest&, const GetTableQAServiceInfoByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableQAServiceInfoByIdAsyncHandler;
			typedef Outcome<Error, Model::GetTcChEcomResult> GetTcChEcomOutcome;
			typedef std::future<GetTcChEcomOutcome> GetTcChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetTcChEcomRequest&, const GetTcChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTcChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetTcChGeneralResult> GetTcChGeneralOutcome;
			typedef std::future<GetTcChGeneralOutcome> GetTcChGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetTcChGeneralRequest&, const GetTcChGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTcChGeneralAsyncHandler;
			typedef Outcome<Error, Model::GetTsChEcomResult> GetTsChEcomOutcome;
			typedef std::future<GetTsChEcomOutcome> GetTsChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetTsChEcomRequest&, const GetTsChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTsChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetUserUploadSignResult> GetUserUploadSignOutcome;
			typedef std::future<GetUserUploadSignOutcome> GetUserUploadSignOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetUserUploadSignRequest&, const GetUserUploadSignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserUploadSignAsyncHandler;
			typedef Outcome<Error, Model::GetWeChCommentResult> GetWeChCommentOutcome;
			typedef std::future<GetWeChCommentOutcome> GetWeChCommentOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWeChCommentRequest&, const GetWeChCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWeChCommentAsyncHandler;
			typedef Outcome<Error, Model::GetWeChEcomResult> GetWeChEcomOutcome;
			typedef std::future<GetWeChEcomOutcome> GetWeChEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWeChEcomRequest&, const GetWeChEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWeChEcomAsyncHandler;
			typedef Outcome<Error, Model::GetWeChEntertainmentResult> GetWeChEntertainmentOutcome;
			typedef std::future<GetWeChEntertainmentOutcome> GetWeChEntertainmentOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWeChEntertainmentRequest&, const GetWeChEntertainmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWeChEntertainmentAsyncHandler;
			typedef Outcome<Error, Model::GetWeChGeneralResult> GetWeChGeneralOutcome;
			typedef std::future<GetWeChGeneralOutcome> GetWeChGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWeChGeneralRequest&, const GetWeChGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWeChGeneralAsyncHandler;
			typedef Outcome<Error, Model::GetWeChSearchResult> GetWeChSearchOutcome;
			typedef std::future<GetWeChSearchOutcome> GetWeChSearchOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWeChSearchRequest&, const GetWeChSearchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWeChSearchAsyncHandler;
			typedef Outcome<Error, Model::GetWsChGeneralResult> GetWsChGeneralOutcome;
			typedef std::future<GetWsChGeneralOutcome> GetWsChGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsChGeneralRequest&, const GetWsChGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsChGeneralAsyncHandler;
			typedef Outcome<Error, Model::GetWsCustomizedChEcomCommentResult> GetWsCustomizedChEcomCommentOutcome;
			typedef std::future<GetWsCustomizedChEcomCommentOutcome> GetWsCustomizedChEcomCommentOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsCustomizedChEcomCommentRequest&, const GetWsCustomizedChEcomCommentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsCustomizedChEcomCommentAsyncHandler;
			typedef Outcome<Error, Model::GetWsCustomizedChEcomContentResult> GetWsCustomizedChEcomContentOutcome;
			typedef std::future<GetWsCustomizedChEcomContentOutcome> GetWsCustomizedChEcomContentOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsCustomizedChEcomContentRequest&, const GetWsCustomizedChEcomContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsCustomizedChEcomContentAsyncHandler;
			typedef Outcome<Error, Model::GetWsCustomizedChEcomTitleResult> GetWsCustomizedChEcomTitleOutcome;
			typedef std::future<GetWsCustomizedChEcomTitleOutcome> GetWsCustomizedChEcomTitleOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsCustomizedChEcomTitleRequest&, const GetWsCustomizedChEcomTitleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsCustomizedChEcomTitleAsyncHandler;
			typedef Outcome<Error, Model::GetWsCustomizedChEntertainmentResult> GetWsCustomizedChEntertainmentOutcome;
			typedef std::future<GetWsCustomizedChEntertainmentOutcome> GetWsCustomizedChEntertainmentOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsCustomizedChEntertainmentRequest&, const GetWsCustomizedChEntertainmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsCustomizedChEntertainmentAsyncHandler;
			typedef Outcome<Error, Model::GetWsCustomizedChGeneralResult> GetWsCustomizedChGeneralOutcome;
			typedef std::future<GetWsCustomizedChGeneralOutcome> GetWsCustomizedChGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsCustomizedChGeneralRequest&, const GetWsCustomizedChGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsCustomizedChGeneralAsyncHandler;
			typedef Outcome<Error, Model::GetWsCustomizedChO2OResult> GetWsCustomizedChO2OOutcome;
			typedef std::future<GetWsCustomizedChO2OOutcome> GetWsCustomizedChO2OOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsCustomizedChO2ORequest&, const GetWsCustomizedChO2OOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsCustomizedChO2OAsyncHandler;
			typedef Outcome<Error, Model::GetWsCustomizedSeaEcomResult> GetWsCustomizedSeaEcomOutcome;
			typedef std::future<GetWsCustomizedSeaEcomOutcome> GetWsCustomizedSeaEcomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsCustomizedSeaEcomRequest&, const GetWsCustomizedSeaEcomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsCustomizedSeaEcomAsyncHandler;
			typedef Outcome<Error, Model::GetWsCustomizedSeaGeneralResult> GetWsCustomizedSeaGeneralOutcome;
			typedef std::future<GetWsCustomizedSeaGeneralOutcome> GetWsCustomizedSeaGeneralOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::GetWsCustomizedSeaGeneralRequest&, const GetWsCustomizedSeaGeneralOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWsCustomizedSeaGeneralAsyncHandler;
			typedef Outcome<Error, Model::InsertCustomResult> InsertCustomOutcome;
			typedef std::future<InsertCustomOutcome> InsertCustomOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::InsertCustomRequest&, const InsertCustomOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertCustomAsyncHandler;
			typedef Outcome<Error, Model::OpenAlinlpServiceResult> OpenAlinlpServiceOutcome;
			typedef std::future<OpenAlinlpServiceOutcome> OpenAlinlpServiceOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::OpenAlinlpServiceRequest&, const OpenAlinlpServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenAlinlpServiceAsyncHandler;
			typedef Outcome<Error, Model::RequestTableQAResult> RequestTableQAOutcome;
			typedef std::future<RequestTableQAOutcome> RequestTableQAOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::RequestTableQARequest&, const RequestTableQAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RequestTableQAAsyncHandler;
			typedef Outcome<Error, Model::RequestTableQAOnlineResult> RequestTableQAOnlineOutcome;
			typedef std::future<RequestTableQAOnlineOutcome> RequestTableQAOnlineOutcomeCallable;
			typedef std::function<void(const AlinlpClient*, const Model::RequestTableQAOnlineRequest&, const RequestTableQAOnlineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RequestTableQAOnlineAsyncHandler;

			AlinlpClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AlinlpClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AlinlpClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AlinlpClient();
			ADClockOutcome aDClock(const Model::ADClockRequest &request)const;
			void aDClockAsync(const Model::ADClockRequest& request, const ADClockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ADClockOutcomeCallable aDClockCallable(const Model::ADClockRequest& request) const;
			ADMMUOutcome aDMMU(const Model::ADMMURequest &request)const;
			void aDMMUAsync(const Model::ADMMURequest& request, const ADMMUAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ADMMUOutcomeCallable aDMMUCallable(const Model::ADMMURequest& request) const;
			ADMiniCogOutcome aDMiniCog(const Model::ADMiniCogRequest &request)const;
			void aDMiniCogAsync(const Model::ADMiniCogRequest& request, const ADMiniCogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ADMiniCogOutcomeCallable aDMiniCogCallable(const Model::ADMiniCogRequest& request) const;
			ADMiniCogResultOutcome aDMiniCogResult(const Model::ADMiniCogResultRequest &request)const;
			void aDMiniCogResultAsync(const Model::ADMiniCogResultRequest& request, const ADMiniCogResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ADMiniCogResultOutcomeCallable aDMiniCogResultCallable(const Model::ADMiniCogResultRequest& request) const;
			GetBrandChEcomOutcome getBrandChEcom(const Model::GetBrandChEcomRequest &request)const;
			void getBrandChEcomAsync(const Model::GetBrandChEcomRequest& request, const GetBrandChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBrandChEcomOutcomeCallable getBrandChEcomCallable(const Model::GetBrandChEcomRequest& request) const;
			GetCateChEcomOutcome getCateChEcom(const Model::GetCateChEcomRequest &request)const;
			void getCateChEcomAsync(const Model::GetCateChEcomRequest& request, const GetCateChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCateChEcomOutcomeCallable getCateChEcomCallable(const Model::GetCateChEcomRequest& request) const;
			GetCheckDuplicationChMedicalOutcome getCheckDuplicationChMedical(const Model::GetCheckDuplicationChMedicalRequest &request)const;
			void getCheckDuplicationChMedicalAsync(const Model::GetCheckDuplicationChMedicalRequest& request, const GetCheckDuplicationChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckDuplicationChMedicalOutcomeCallable getCheckDuplicationChMedicalCallable(const Model::GetCheckDuplicationChMedicalRequest& request) const;
			GetDiagnosisChMedicalOutcome getDiagnosisChMedical(const Model::GetDiagnosisChMedicalRequest &request)const;
			void getDiagnosisChMedicalAsync(const Model::GetDiagnosisChMedicalRequest& request, const GetDiagnosisChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDiagnosisChMedicalOutcomeCallable getDiagnosisChMedicalCallable(const Model::GetDiagnosisChMedicalRequest& request) const;
			GetDpChEcomOutcome getDpChEcom(const Model::GetDpChEcomRequest &request)const;
			void getDpChEcomAsync(const Model::GetDpChEcomRequest& request, const GetDpChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDpChEcomOutcomeCallable getDpChEcomCallable(const Model::GetDpChEcomRequest& request) const;
			GetDpChGeneralCTBOutcome getDpChGeneralCTB(const Model::GetDpChGeneralCTBRequest &request)const;
			void getDpChGeneralCTBAsync(const Model::GetDpChGeneralCTBRequest& request, const GetDpChGeneralCTBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDpChGeneralCTBOutcomeCallable getDpChGeneralCTBCallable(const Model::GetDpChGeneralCTBRequest& request) const;
			GetDpChGeneralStanfordOutcome getDpChGeneralStanford(const Model::GetDpChGeneralStanfordRequest &request)const;
			void getDpChGeneralStanfordAsync(const Model::GetDpChGeneralStanfordRequest& request, const GetDpChGeneralStanfordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDpChGeneralStanfordOutcomeCallable getDpChGeneralStanfordCallable(const Model::GetDpChGeneralStanfordRequest& request) const;
			GetEcChGeneralOutcome getEcChGeneral(const Model::GetEcChGeneralRequest &request)const;
			void getEcChGeneralAsync(const Model::GetEcChGeneralRequest& request, const GetEcChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEcChGeneralOutcomeCallable getEcChGeneralCallable(const Model::GetEcChGeneralRequest& request) const;
			GetEcEnGeneralOutcome getEcEnGeneral(const Model::GetEcEnGeneralRequest &request)const;
			void getEcEnGeneralAsync(const Model::GetEcEnGeneralRequest& request, const GetEcEnGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEcEnGeneralOutcomeCallable getEcEnGeneralCallable(const Model::GetEcEnGeneralRequest& request) const;
			GetEmbeddingOutcome getEmbedding(const Model::GetEmbeddingRequest &request)const;
			void getEmbeddingAsync(const Model::GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEmbeddingOutcomeCallable getEmbeddingCallable(const Model::GetEmbeddingRequest& request) const;
			GetItemPubChEcomOutcome getItemPubChEcom(const Model::GetItemPubChEcomRequest &request)const;
			void getItemPubChEcomAsync(const Model::GetItemPubChEcomRequest& request, const GetItemPubChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetItemPubChEcomOutcomeCallable getItemPubChEcomCallable(const Model::GetItemPubChEcomRequest& request) const;
			GetKeywordChEcomOutcome getKeywordChEcom(const Model::GetKeywordChEcomRequest &request)const;
			void getKeywordChEcomAsync(const Model::GetKeywordChEcomRequest& request, const GetKeywordChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetKeywordChEcomOutcomeCallable getKeywordChEcomCallable(const Model::GetKeywordChEcomRequest& request) const;
			GetKeywordEnEcomOutcome getKeywordEnEcom(const Model::GetKeywordEnEcomRequest &request)const;
			void getKeywordEnEcomAsync(const Model::GetKeywordEnEcomRequest& request, const GetKeywordEnEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetKeywordEnEcomOutcomeCallable getKeywordEnEcomCallable(const Model::GetKeywordEnEcomRequest& request) const;
			GetMedicineChMedicalOutcome getMedicineChMedical(const Model::GetMedicineChMedicalRequest &request)const;
			void getMedicineChMedicalAsync(const Model::GetMedicineChMedicalRequest& request, const GetMedicineChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMedicineChMedicalOutcomeCallable getMedicineChMedicalCallable(const Model::GetMedicineChMedicalRequest& request) const;
			GetNerChEcomOutcome getNerChEcom(const Model::GetNerChEcomRequest &request)const;
			void getNerChEcomAsync(const Model::GetNerChEcomRequest& request, const GetNerChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNerChEcomOutcomeCallable getNerChEcomCallable(const Model::GetNerChEcomRequest& request) const;
			GetNerChMedicalOutcome getNerChMedical(const Model::GetNerChMedicalRequest &request)const;
			void getNerChMedicalAsync(const Model::GetNerChMedicalRequest& request, const GetNerChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNerChMedicalOutcomeCallable getNerChMedicalCallable(const Model::GetNerChMedicalRequest& request) const;
			GetNerCustomizedChEcomOutcome getNerCustomizedChEcom(const Model::GetNerCustomizedChEcomRequest &request)const;
			void getNerCustomizedChEcomAsync(const Model::GetNerCustomizedChEcomRequest& request, const GetNerCustomizedChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNerCustomizedChEcomOutcomeCallable getNerCustomizedChEcomCallable(const Model::GetNerCustomizedChEcomRequest& request) const;
			GetNerCustomizedSeaEcomOutcome getNerCustomizedSeaEcom(const Model::GetNerCustomizedSeaEcomRequest &request)const;
			void getNerCustomizedSeaEcomAsync(const Model::GetNerCustomizedSeaEcomRequest& request, const GetNerCustomizedSeaEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNerCustomizedSeaEcomOutcomeCallable getNerCustomizedSeaEcomCallable(const Model::GetNerCustomizedSeaEcomRequest& request) const;
			GetOpenNLUOutcome getOpenNLU(const Model::GetOpenNLURequest &request)const;
			void getOpenNLUAsync(const Model::GetOpenNLURequest& request, const GetOpenNLUAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpenNLUOutcomeCallable getOpenNLUCallable(const Model::GetOpenNLURequest& request) const;
			GetOpenNLUHighRecallOutcome getOpenNLUHighRecall(const Model::GetOpenNLUHighRecallRequest &request)const;
			void getOpenNLUHighRecallAsync(const Model::GetOpenNLUHighRecallRequest& request, const GetOpenNLUHighRecallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpenNLUHighRecallOutcomeCallable getOpenNLUHighRecallCallable(const Model::GetOpenNLUHighRecallRequest& request) const;
			GetOperationChMedicalOutcome getOperationChMedical(const Model::GetOperationChMedicalRequest &request)const;
			void getOperationChMedicalAsync(const Model::GetOperationChMedicalRequest& request, const GetOperationChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOperationChMedicalOutcomeCallable getOperationChMedicalCallable(const Model::GetOperationChMedicalRequest& request) const;
			GetPosChEcomOutcome getPosChEcom(const Model::GetPosChEcomRequest &request)const;
			void getPosChEcomAsync(const Model::GetPosChEcomRequest& request, const GetPosChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPosChEcomOutcomeCallable getPosChEcomCallable(const Model::GetPosChEcomRequest& request) const;
			GetPosChGeneralOutcome getPosChGeneral(const Model::GetPosChGeneralRequest &request)const;
			void getPosChGeneralAsync(const Model::GetPosChGeneralRequest& request, const GetPosChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPosChGeneralOutcomeCallable getPosChGeneralCallable(const Model::GetPosChGeneralRequest& request) const;
			GetPriceChEcomOutcome getPriceChEcom(const Model::GetPriceChEcomRequest &request)const;
			void getPriceChEcomAsync(const Model::GetPriceChEcomRequest& request, const GetPriceChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPriceChEcomOutcomeCallable getPriceChEcomCallable(const Model::GetPriceChEcomRequest& request) const;
			GetSSETestOutcome getSSETest(const Model::GetSSETestRequest &request)const;
			void getSSETestAsync(const Model::GetSSETestRequest& request, const GetSSETestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSSETestOutcomeCallable getSSETestCallable(const Model::GetSSETestRequest& request) const;
			GetSaChGeneralOutcome getSaChGeneral(const Model::GetSaChGeneralRequest &request)const;
			void getSaChGeneralAsync(const Model::GetSaChGeneralRequest& request, const GetSaChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSaChGeneralOutcomeCallable getSaChGeneralCallable(const Model::GetSaChGeneralRequest& request) const;
			GetSaSeaEcomOutcome getSaSeaEcom(const Model::GetSaSeaEcomRequest &request)const;
			void getSaSeaEcomAsync(const Model::GetSaSeaEcomRequest& request, const GetSaSeaEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSaSeaEcomOutcomeCallable getSaSeaEcomCallable(const Model::GetSaSeaEcomRequest& request) const;
			GetSimilarityChMedicalOutcome getSimilarityChMedical(const Model::GetSimilarityChMedicalRequest &request)const;
			void getSimilarityChMedicalAsync(const Model::GetSimilarityChMedicalRequest& request, const GetSimilarityChMedicalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSimilarityChMedicalOutcomeCallable getSimilarityChMedicalCallable(const Model::GetSimilarityChMedicalRequest& request) const;
			GetSummaryChEcomOutcome getSummaryChEcom(const Model::GetSummaryChEcomRequest &request)const;
			void getSummaryChEcomAsync(const Model::GetSummaryChEcomRequest& request, const GetSummaryChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSummaryChEcomOutcomeCallable getSummaryChEcomCallable(const Model::GetSummaryChEcomRequest& request) const;
			GetTableQAServiceInfoByIdOutcome getTableQAServiceInfoById(const Model::GetTableQAServiceInfoByIdRequest &request)const;
			void getTableQAServiceInfoByIdAsync(const Model::GetTableQAServiceInfoByIdRequest& request, const GetTableQAServiceInfoByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableQAServiceInfoByIdOutcomeCallable getTableQAServiceInfoByIdCallable(const Model::GetTableQAServiceInfoByIdRequest& request) const;
			GetTcChEcomOutcome getTcChEcom(const Model::GetTcChEcomRequest &request)const;
			void getTcChEcomAsync(const Model::GetTcChEcomRequest& request, const GetTcChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTcChEcomOutcomeCallable getTcChEcomCallable(const Model::GetTcChEcomRequest& request) const;
			GetTcChGeneralOutcome getTcChGeneral(const Model::GetTcChGeneralRequest &request)const;
			void getTcChGeneralAsync(const Model::GetTcChGeneralRequest& request, const GetTcChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTcChGeneralOutcomeCallable getTcChGeneralCallable(const Model::GetTcChGeneralRequest& request) const;
			GetTsChEcomOutcome getTsChEcom(const Model::GetTsChEcomRequest &request)const;
			void getTsChEcomAsync(const Model::GetTsChEcomRequest& request, const GetTsChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTsChEcomOutcomeCallable getTsChEcomCallable(const Model::GetTsChEcomRequest& request) const;
			GetUserUploadSignOutcome getUserUploadSign(const Model::GetUserUploadSignRequest &request)const;
			void getUserUploadSignAsync(const Model::GetUserUploadSignRequest& request, const GetUserUploadSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserUploadSignOutcomeCallable getUserUploadSignCallable(const Model::GetUserUploadSignRequest& request) const;
			GetWeChCommentOutcome getWeChComment(const Model::GetWeChCommentRequest &request)const;
			void getWeChCommentAsync(const Model::GetWeChCommentRequest& request, const GetWeChCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWeChCommentOutcomeCallable getWeChCommentCallable(const Model::GetWeChCommentRequest& request) const;
			GetWeChEcomOutcome getWeChEcom(const Model::GetWeChEcomRequest &request)const;
			void getWeChEcomAsync(const Model::GetWeChEcomRequest& request, const GetWeChEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWeChEcomOutcomeCallable getWeChEcomCallable(const Model::GetWeChEcomRequest& request) const;
			GetWeChEntertainmentOutcome getWeChEntertainment(const Model::GetWeChEntertainmentRequest &request)const;
			void getWeChEntertainmentAsync(const Model::GetWeChEntertainmentRequest& request, const GetWeChEntertainmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWeChEntertainmentOutcomeCallable getWeChEntertainmentCallable(const Model::GetWeChEntertainmentRequest& request) const;
			GetWeChGeneralOutcome getWeChGeneral(const Model::GetWeChGeneralRequest &request)const;
			void getWeChGeneralAsync(const Model::GetWeChGeneralRequest& request, const GetWeChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWeChGeneralOutcomeCallable getWeChGeneralCallable(const Model::GetWeChGeneralRequest& request) const;
			GetWeChSearchOutcome getWeChSearch(const Model::GetWeChSearchRequest &request)const;
			void getWeChSearchAsync(const Model::GetWeChSearchRequest& request, const GetWeChSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWeChSearchOutcomeCallable getWeChSearchCallable(const Model::GetWeChSearchRequest& request) const;
			GetWsChGeneralOutcome getWsChGeneral(const Model::GetWsChGeneralRequest &request)const;
			void getWsChGeneralAsync(const Model::GetWsChGeneralRequest& request, const GetWsChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsChGeneralOutcomeCallable getWsChGeneralCallable(const Model::GetWsChGeneralRequest& request) const;
			GetWsCustomizedChEcomCommentOutcome getWsCustomizedChEcomComment(const Model::GetWsCustomizedChEcomCommentRequest &request)const;
			void getWsCustomizedChEcomCommentAsync(const Model::GetWsCustomizedChEcomCommentRequest& request, const GetWsCustomizedChEcomCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsCustomizedChEcomCommentOutcomeCallable getWsCustomizedChEcomCommentCallable(const Model::GetWsCustomizedChEcomCommentRequest& request) const;
			GetWsCustomizedChEcomContentOutcome getWsCustomizedChEcomContent(const Model::GetWsCustomizedChEcomContentRequest &request)const;
			void getWsCustomizedChEcomContentAsync(const Model::GetWsCustomizedChEcomContentRequest& request, const GetWsCustomizedChEcomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsCustomizedChEcomContentOutcomeCallable getWsCustomizedChEcomContentCallable(const Model::GetWsCustomizedChEcomContentRequest& request) const;
			GetWsCustomizedChEcomTitleOutcome getWsCustomizedChEcomTitle(const Model::GetWsCustomizedChEcomTitleRequest &request)const;
			void getWsCustomizedChEcomTitleAsync(const Model::GetWsCustomizedChEcomTitleRequest& request, const GetWsCustomizedChEcomTitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsCustomizedChEcomTitleOutcomeCallable getWsCustomizedChEcomTitleCallable(const Model::GetWsCustomizedChEcomTitleRequest& request) const;
			GetWsCustomizedChEntertainmentOutcome getWsCustomizedChEntertainment(const Model::GetWsCustomizedChEntertainmentRequest &request)const;
			void getWsCustomizedChEntertainmentAsync(const Model::GetWsCustomizedChEntertainmentRequest& request, const GetWsCustomizedChEntertainmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsCustomizedChEntertainmentOutcomeCallable getWsCustomizedChEntertainmentCallable(const Model::GetWsCustomizedChEntertainmentRequest& request) const;
			GetWsCustomizedChGeneralOutcome getWsCustomizedChGeneral(const Model::GetWsCustomizedChGeneralRequest &request)const;
			void getWsCustomizedChGeneralAsync(const Model::GetWsCustomizedChGeneralRequest& request, const GetWsCustomizedChGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsCustomizedChGeneralOutcomeCallable getWsCustomizedChGeneralCallable(const Model::GetWsCustomizedChGeneralRequest& request) const;
			GetWsCustomizedChO2OOutcome getWsCustomizedChO2O(const Model::GetWsCustomizedChO2ORequest &request)const;
			void getWsCustomizedChO2OAsync(const Model::GetWsCustomizedChO2ORequest& request, const GetWsCustomizedChO2OAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsCustomizedChO2OOutcomeCallable getWsCustomizedChO2OCallable(const Model::GetWsCustomizedChO2ORequest& request) const;
			GetWsCustomizedSeaEcomOutcome getWsCustomizedSeaEcom(const Model::GetWsCustomizedSeaEcomRequest &request)const;
			void getWsCustomizedSeaEcomAsync(const Model::GetWsCustomizedSeaEcomRequest& request, const GetWsCustomizedSeaEcomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsCustomizedSeaEcomOutcomeCallable getWsCustomizedSeaEcomCallable(const Model::GetWsCustomizedSeaEcomRequest& request) const;
			GetWsCustomizedSeaGeneralOutcome getWsCustomizedSeaGeneral(const Model::GetWsCustomizedSeaGeneralRequest &request)const;
			void getWsCustomizedSeaGeneralAsync(const Model::GetWsCustomizedSeaGeneralRequest& request, const GetWsCustomizedSeaGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWsCustomizedSeaGeneralOutcomeCallable getWsCustomizedSeaGeneralCallable(const Model::GetWsCustomizedSeaGeneralRequest& request) const;
			InsertCustomOutcome insertCustom(const Model::InsertCustomRequest &request)const;
			void insertCustomAsync(const Model::InsertCustomRequest& request, const InsertCustomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertCustomOutcomeCallable insertCustomCallable(const Model::InsertCustomRequest& request) const;
			OpenAlinlpServiceOutcome openAlinlpService(const Model::OpenAlinlpServiceRequest &request)const;
			void openAlinlpServiceAsync(const Model::OpenAlinlpServiceRequest& request, const OpenAlinlpServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenAlinlpServiceOutcomeCallable openAlinlpServiceCallable(const Model::OpenAlinlpServiceRequest& request) const;
			RequestTableQAOutcome requestTableQA(const Model::RequestTableQARequest &request)const;
			void requestTableQAAsync(const Model::RequestTableQARequest& request, const RequestTableQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RequestTableQAOutcomeCallable requestTableQACallable(const Model::RequestTableQARequest& request) const;
			RequestTableQAOnlineOutcome requestTableQAOnline(const Model::RequestTableQAOnlineRequest &request)const;
			void requestTableQAOnlineAsync(const Model::RequestTableQAOnlineRequest& request, const RequestTableQAOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RequestTableQAOnlineOutcomeCallable requestTableQAOnlineCallable(const Model::RequestTableQAOnlineRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALINLP_ALINLPCLIENT_H_
