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

#ifndef ALIBABACLOUD_ARMS4FINANCE_MODEL_WHEREINDIMQUERYREQUEST_H_
#define ALIBABACLOUD_ARMS4FINANCE_MODEL_WHEREINDIMQUERYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms4finance/ARMS4FINANCEExport.h>

namespace AlibabaCloud
{
	namespace ARMS4FINANCE
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS4FINANCE_EXPORT WhereInDimQueryRequest : public RpcServiceRequest
			{
			public:
				struct Dimensions
				{
					std::string value;
					std::string key;
				};

			public:
				WhereInDimQueryRequest();
				~WhereInDimQueryRequest();

				std::string getDateStr()const;
				void setDateStr(const std::string& dateStr);
				long getMinTime()const;
				void setMinTime(long minTime);
				long getMaxTime()const;
				void setMaxTime(long maxTime);
				std::string getWhereInKey()const;
				void setWhereInKey(const std::string& whereInKey);
				std::vector<std::string> getMeasures()const;
				void setMeasures(const std::vector<std::string>& measures);
				int getIntervalInSec()const;
				void setIntervalInSec(int intervalInSec);
				bool getIsDrillDown()const;
				void setIsDrillDown(bool isDrillDown);
				long getDatasetId()const;
				void setDatasetId(long datasetId);
				std::vector<std::string> getWhereInValues()const;
				void setWhereInValues(const std::vector<std::string>& whereInValues);
				std::vector<Dimensions> getDimensions()const;
				void setDimensions(const std::vector<Dimensions>& dimensions);

            private:
				std::string dateStr_;
				long minTime_;
				long maxTime_;
				std::string whereInKey_;
				std::vector<std::string> measures_;
				int intervalInSec_;
				bool isDrillDown_;
				long datasetId_;
				std::vector<std::string> whereInValues_;
				std::vector<Dimensions> dimensions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS4FINANCE_MODEL_WHEREINDIMQUERYREQUEST_H_