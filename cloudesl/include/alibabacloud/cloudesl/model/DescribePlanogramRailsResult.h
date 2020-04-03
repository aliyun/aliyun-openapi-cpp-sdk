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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEPLANOGRAMRAILSRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEPLANOGRAMRAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribePlanogramRailsResult : public ServiceResult
			{
			public:
				struct PlanogramRailInfo
				{
					std::string railCode;
					std::string shelf;
					int gapUnit;
					int layer;
				};


				DescribePlanogramRailsResult();
				explicit DescribePlanogramRailsResult(const std::string &payload);
				~DescribePlanogramRailsResult();
				std::vector<PlanogramRailInfo> getPlanogramRailInfos()const;
				int getTotalCount()const;
				std::string getMessage()const;
				std::string getStoreId()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PlanogramRailInfo> planogramRailInfos_;
				int totalCount_;
				std::string message_;
				std::string storeId_;
				int pageSize_;
				int pageNumber_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string errorCode_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEPLANOGRAMRAILSRESULT_H_