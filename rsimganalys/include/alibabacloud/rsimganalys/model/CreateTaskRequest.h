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

#ifndef ALIBABACLOUD_RSIMGANALYS_MODEL_CREATETASKREQUEST_H_
#define ALIBABACLOUD_RSIMGANALYS_MODEL_CREATETASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rsimganalys/RsimganalysExport.h>

namespace AlibabaCloud
{
	namespace Rsimganalys
	{
		namespace Model
		{
			class ALIBABACLOUD_RSIMGANALYS_EXPORT CreateTaskRequest : public RpcServiceRequest
			{

			public:
				CreateTaskRequest();
				~CreateTaskRequest();

				float getConfidence()const;
				void setConfidence(float confidence);
				long getFilterValue()const;
				void setFilterValue(long filterValue);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getShpFilter()const;
				void setShpFilter(const std::string& shpFilter);
				std::string getProductType()const;
				void setProductType(const std::string& productType);
				std::string getZoneList()const;
				void setZoneList(const std::string& zoneList);
				std::string getSrcImageId()const;
				void setSrcImageId(const std::string& srcImageId);
				std::string getAppkey()const;
				void setAppkey(const std::string& appkey);
				std::string getDstImageId()const;
				void setDstImageId(const std::string& dstImageId);
				std::string getJobName()const;
				void setJobName(const std::string& jobName);

            private:
				float confidence_;
				long filterValue_;
				std::string description_;
				std::string shpFilter_;
				std::string productType_;
				std::string zoneList_;
				std::string srcImageId_;
				std::string appkey_;
				std::string dstImageId_;
				std::string jobName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RSIMGANALYS_MODEL_CREATETASKREQUEST_H_