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

#ifndef ALIBABACLOUD_IVPD_MODEL_CREATESEGMENTBODYJOBREQUEST_H_
#define ALIBABACLOUD_IVPD_MODEL_CREATESEGMENTBODYJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivpd/IvpdExport.h>

namespace AlibabaCloud
{
	namespace Ivpd
	{
		namespace Model
		{
			class ALIBABACLOUD_IVPD_EXPORT CreateSegmentBodyJobRequest : public RpcServiceRequest
			{
			public:
				struct DataList
				{
					std::string dataId;
					std::string imageUrl;
				};

			public:
				CreateSegmentBodyJobRequest();
				~CreateSegmentBodyJobRequest();

				std::vector<DataList> getDataList()const;
				void setDataList(const std::vector<DataList>& dataList);
				bool getAsync()const;
				void setAsync(bool async);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				int getTimeToLive()const;
				void setTimeToLive(int timeToLive);

            private:
				std::vector<DataList> dataList_;
				bool async_;
				std::string jobId_;
				int timeToLive_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVPD_MODEL_CREATESEGMENTBODYJOBREQUEST_H_