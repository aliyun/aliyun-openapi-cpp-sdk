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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETSQLREVIEWOPTIMIZEDETAILRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETSQLREVIEWOPTIMIZEDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetSQLReviewOptimizeDetailResult : public ServiceResult
			{
			public:
				struct OptimizeDetail
				{
					struct QualityResult
					{
						struct ResultsItem
						{
							struct ScriptsItem
							{
								std::string tableName;
								std::string content;
								std::string opType;
							};
							std::vector<std::string> messages;
							std::vector<ResultsItem::ScriptsItem> scripts;
							std::string feedback;
							std::string comments;
							std::string ruleType;
							std::string ruleName;
						};
						bool occurError;
						std::vector<ResultsItem> results;
						std::string errorMessage;
					};
					int instanceId;
					std::string queryKey;
					int dbId;
					std::string sqlType;
					QualityResult qualityResult;
				};


				GetSQLReviewOptimizeDetailResult();
				explicit GetSQLReviewOptimizeDetailResult(const std::string &payload);
				~GetSQLReviewOptimizeDetailResult();
				OptimizeDetail getOptimizeDetail()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				OptimizeDetail optimizeDetail_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETSQLREVIEWOPTIMIZEDETAILRESULT_H_