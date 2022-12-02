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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDEDICATEDCLUSTERRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDEDICATEDCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeDedicatedClusterResult : public ServiceResult
			{
			public:


				DescribeDedicatedClusterResult();
				explicit DescribeDedicatedClusterResult(const std::string &payload);
				~DescribeDedicatedClusterResult();
				long getUsedDu()const;
				long getDuUtilization()const;
				long getUsedDiskGBSize()const;
				long getGmtCreated()const;
				std::string getDedicatedClusterName()const;
				std::string getDtsInstanceID()const;
				std::string getSuccess()const;
				long getTotalMemGBSize()const;
				long getMemUtilization()const;
				std::string getHttpStatusCode()const;
				long getUsedCpuCore()const;
				std::string getDedicatedClusterId()const;
				long getNodeCount()const;
				long getOversoldDu()const;
				long getTotalDiskGBSize()const;
				long getDiskUtilization()const;
				long getGmtFinished()const;
				long getUsedMemGBSize()const;
				std::string getErrMessage()const;
				std::string getErrCode()const;
				long getDu()const;
				std::string getState()const;
				long getTotalCpuCore()const;
				std::string getRegionId()const;
				long getCpuUtilization()const;

			protected:
				void parse(const std::string &payload);
			private:
				long usedDu_;
				long duUtilization_;
				long usedDiskGBSize_;
				long gmtCreated_;
				std::string dedicatedClusterName_;
				std::string dtsInstanceID_;
				std::string success_;
				long totalMemGBSize_;
				long memUtilization_;
				std::string httpStatusCode_;
				long usedCpuCore_;
				std::string dedicatedClusterId_;
				long nodeCount_;
				long oversoldDu_;
				long totalDiskGBSize_;
				long diskUtilization_;
				long gmtFinished_;
				long usedMemGBSize_;
				std::string errMessage_;
				std::string errCode_;
				long du_;
				std::string state_;
				long totalCpuCore_;
				std::string regionId_;
				long cpuUtilization_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDEDICATEDCLUSTERRESULT_H_