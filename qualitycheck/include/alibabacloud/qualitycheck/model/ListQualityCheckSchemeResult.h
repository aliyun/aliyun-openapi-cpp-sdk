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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_LISTQUALITYCHECKSCHEMERESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_LISTQUALITYCHECKSCHEMERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT ListQualityCheckSchemeResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct SchemeCheckTypeListItem
					{
						std::string checkName;
						int score;
						int checkType;
						int targetType;
						int enable;
					};
					struct RuleListItem
					{
						struct RulesItem
						{
							int ruleScoreType;
							int checkType;
							int targetType;
							int scoreNumType;
							int scoreType;
							long rid;
							int scoreNum;
							std::string name;
						};
						std::vector<RuleListItem::RulesItem> rules;
					};
					int status;
					std::string updateUserName;
					std::vector<DataItem::RuleListItem> ruleList;
					std::string description;
					long schemeId;
					std::vector<DataItem::SchemeCheckTypeListItem> schemeCheckTypeList;
					std::string createTime;
					int templateType;
					std::string createUserName;
					std::string name;
					int type;
					long version;
					std::string updateTime;
					int dataType;
				};


				ListQualityCheckSchemeResult();
				explicit ListQualityCheckSchemeResult(const std::string &payload);
				~ListQualityCheckSchemeResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DataItem> getData()const;
				int getCount()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::string getResultCountId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<DataItem> data_;
				int count_;
				std::string code_;
				bool success_;
				std::string resultCountId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_LISTQUALITYCHECKSCHEMERESULT_H_