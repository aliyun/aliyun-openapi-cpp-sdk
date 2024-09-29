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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTQUALITYRESULTSBYENTITYRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTQUALITYRESULTSBYENTITYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListQualityResultsByEntityResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RuleChecksItem
					{
						struct ReferenceValueItem
						{
							int singleCheckResult;
							float value;
							std::string discreteProperty;
							std::string bizDate;
							float threshold;
						};
						struct SampleValueItem
						{
							float value;
							std::string discreteProperty;
							std::string bizDate;
						};
						std::string op;
						std::vector<RuleChecksItem::SampleValueItem> sampleValue;
						std::string taskId;
						std::string checkerName;
						bool discreteCheck;
						long endTime;
						std::string projectName;
						float expectValue;
						std::vector<RuleChecksItem::ReferenceValueItem> referenceValue;
						float warningThreshold;
						long ruleId;
						long beginTime;
						std::string whereCondition;
						int checkResultStatus;
						std::string matchExpression;
						float upperValue;
						bool isPrediction;
						int checkResult;
						std::string templateName;
						bool fixedCheck;
						std::string timeCost;
						std::string methodName;
						std::string resultString;
						std::string property;
						std::string dateType;
						long bizDate;
						std::string ruleName;
						int templateId;
						std::string comment;
						float criticalThreshold;
						std::string externalId;
						std::string trend;
						int checkerType;
						std::string externalType;
						int checkerId;
						long entityId;
						std::string tableName;
						int blockType;
						std::string actualExpression;
						long id;
						float lowerValue;
					};
					long totalCount;
					int pageSize;
					int pageNumber;
					std::vector<RuleChecksItem> ruleChecks;
				};


				ListQualityResultsByEntityResult();
				explicit ListQualityResultsByEntityResult(const std::string &payload);
				~ListQualityResultsByEntityResult();
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTQUALITYRESULTSBYENTITYRESULT_H_