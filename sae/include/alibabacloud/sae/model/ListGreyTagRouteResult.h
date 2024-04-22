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

#ifndef ALIBABACLOUD_SAE_MODEL_LISTGREYTAGROUTERESULT_H_
#define ALIBABACLOUD_SAE_MODEL_LISTGREYTAGROUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT ListGreyTagRouteResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ResultItem
					{
						struct ScRule
						{
							struct Item
							{
								std::string type;
								std::string cond;
								std::string expr;
								std::string value;
								std::string _operator;
								int index;
								std::string name;
							};
							std::string path;
							std::string condition;
							std::vector<ScRule::Item> items;
						};
						struct AlbRule
						{
							struct Item2
							{
								std::string type;
								std::string cond;
								std::string expr;
								std::string value;
								std::string _operator;
								int index;
								std::string name;
							};
							std::string condition;
							std::string ingressId;
							std::string serviceName;
							std::vector<AlbRule::Item2> items1;
							std::string serviceId;
						};
						struct DubboRule
						{
							struct Item4
							{
								std::string cond;
								std::string type;
								std::string expr;
								std::string value;
								int index;
								std::string _operator;
								std::string name;
							};
							std::string condition;
							std::string group;
							std::string serviceName;
							std::string version;
							std::string methodName;
							std::vector<DubboRule::Item4> items3;
						};
						std::vector<ResultItem::AlbRule> albRules;
						long greyTagRouteId;
						std::string description;
						long createTime;
						std::vector<ResultItem::ScRule> scRules;
						long updateTime;
						std::vector<ResultItem::DubboRule> dubboRules;
						std::string name;
					};
					int pageSize;
					int currentPage;
					long totalSize;
					std::vector<ResultItem> result;
				};


				ListGreyTagRouteResult();
				explicit ListGreyTagRouteResult(const std::string &payload);
				~ListGreyTagRouteResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_LISTGREYTAGROUTERESULT_H_