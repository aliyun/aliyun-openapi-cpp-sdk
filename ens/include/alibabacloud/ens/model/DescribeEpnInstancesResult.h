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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNINSTANCESRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeEpnInstancesResult : public ServiceResult
			{
			public:
				struct EPNInstance
				{
					std::string ePNInstanceType;
					std::string status;
					std::string modifyTime;
					int internetMaxBandwidthOut;
					std::string endTime;
					std::string networkingModel;
					std::string creationTime;
					std::string startTime;
					std::string ePNInstanceId;
					std::string ePNInstanceName;
				};


				DescribeEpnInstancesResult();
				explicit DescribeEpnInstancesResult(const std::string &payload);
				~DescribeEpnInstancesResult();
				int getTotalCount()const;
				std::vector<EPNInstance> getEPNInstances()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<EPNInstance> ePNInstances_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEEPNINSTANCESRESULT_H_