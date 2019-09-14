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

#ifndef ALIBABACLOUD_ARMS_MODEL_QUERYDATASETREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_QUERYDATASETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT QueryDatasetRequest : public RpcServiceRequest
			{
				struct OptionalDims
				{
					std::string type;
					std::string value;
					std::string key;
				};
				struct RequiredDims
				{
					std::string type;
					std::string value;
					std::string key;
				};
				struct Dimensions
				{
					std::string type;
					std::string value;
					std::string key;
				};

			public:
				QueryDatasetRequest();
				~QueryDatasetRequest();

				std::string getDateStr()const;
				void setDateStr(const std::string& dateStr);
				long getMinTime()const;
				void setMinTime(long minTime);
				bool getReduceTail()const;
				void setReduceTail(bool reduceTail);
				long getMaxTime()const;
				void setMaxTime(long maxTime);
				std::vector<OptionalDims> getOptionalDims()const;
				void setOptionalDims(const std::vector<OptionalDims>& optionalDims);
				std::vector<std::string> getMeasures()const;
				void setMeasures(const std::vector<std::string>& measures);
				int getIntervalInSec()const;
				void setIntervalInSec(int intervalInSec);
				bool getIsDrillDown()const;
				void setIsDrillDown(bool isDrillDown);
				bool getHungryMode()const;
				void setHungryMode(bool hungryMode);
				std::string getOrderByKey()const;
				void setOrderByKey(const std::string& orderByKey);
				int getLimit()const;
				void setLimit(int limit);
				long getDatasetId()const;
				void setDatasetId(long datasetId);
				std::vector<RequiredDims> getRequiredDims()const;
				void setRequiredDims(const std::vector<RequiredDims>& requiredDims);
				std::vector<Dimensions> getDimensions()const;
				void setDimensions(const std::vector<Dimensions>& dimensions);

            private:
				std::string dateStr_;
				long minTime_;
				bool reduceTail_;
				long maxTime_;
				std::vector<OptionalDims> optionalDims_;
				std::vector<std::string> measures_;
				int intervalInSec_;
				bool isDrillDown_;
				bool hungryMode_;
				std::string orderByKey_;
				int limit_;
				long datasetId_;
				std::vector<RequiredDims> requiredDims_;
				std::vector<Dimensions> dimensions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_QUERYDATASETREQUEST_H_