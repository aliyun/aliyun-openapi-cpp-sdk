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

#ifndef ALIBABACLOUD_MSE_MODEL_QUERYALLSWIMMINGLANERESULT_H_
#define ALIBABACLOUD_MSE_MODEL_QUERYALLSWIMMINGLANERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT QueryAllSwimmingLaneResult : public ServiceResult
			{
			public:
				struct SwimmingLaneGroup
				{
					struct EntryRule
					{
						struct RestItemsItem
						{
							std::string type;
							std::string cond;
							std::vector<std::string> nameList;
							std::string datum;
							int rate;
							std::string value;
							std::string _operator;
							int divisor;
							std::string name;
							int remainder;
						};
						std::string path;
						std::string condition;
						std::vector<EntryRule::RestItemsItem> restItems;
						std::vector<std::string> paths;
					};
					int status;
					std::string regionId5;
					bool messageQueueGrayEnable;
					std::string gmtModified;
					std::string _namespace;
					std::string name;
					std::string groupId;
					std::string entryRule;
					std::string gmtCreate;
					std::vector<SwimmingLaneGroup::EntryRule> entryRules;
					std::string groupId6;
					std::string userId;
					std::string enable3;
					long id4;
					std::string messageQueueFilterSide;
					std::string enable;
					std::string tag7;
					long id;
					std::string regionId;
					std::string tag;
					bool recordCanaryDetail;
					bool enableRules;
					std::string name1;
					std::string userId2;
				};


				QueryAllSwimmingLaneResult();
				explicit QueryAllSwimmingLaneResult(const std::string &payload);
				~QueryAllSwimmingLaneResult();
				std::string getMessage()const;
				std::vector<SwimmingLaneGroup> getData()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<SwimmingLaneGroup> data_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_QUERYALLSWIMMINGLANERESULT_H_