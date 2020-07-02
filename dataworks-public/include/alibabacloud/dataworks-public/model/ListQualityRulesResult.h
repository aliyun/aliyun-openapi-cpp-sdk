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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTQUALITYRULESRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTQUALITYRULESRESULT_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListQualityRulesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RulesItem
					{
						std::string historyCriticalThreshold;
						std::string comment;
						std::string historyWarningThreshold;
						int ruleCheckerRelationId;
						std::string criticalThreshold;
						std::string projectName;
						std::string expectValue;
						std::string warningThreshold;
						std::string onDuty;
						std::string trend;
						int ruleType;
						int checkerId;
						std::string matchExpression;
						int entityId;
						std::string tableName;
						int methodId;
						bool fixCheck;
						int blockType;
						std::string templateName;
						int id;
						std::string methodName;
						std::string property;
						int templateId;
						std::string propertyKey;
					};
					long totalCount;
					int pageSize;
					int pageNumber;
					std::vector<RulesItem> rules;
				};


				ListQualityRulesResult();
				explicit ListQualityRulesResult(const std::string &payload);
				~ListQualityRulesResult();
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
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTQUALITYRULESRESULT_H_