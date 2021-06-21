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

#ifndef ALIBABACLOUD_RSIMGANALYS_MODEL_LISTTASKSREQUEST_H_
#define ALIBABACLOUD_RSIMGANALYS_MODEL_LISTTASKSREQUEST_H_

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
			class ALIBABACLOUD_RSIMGANALYS_EXPORT ListTasksRequest : public RpcServiceRequest
			{

			public:
				ListTasksRequest();
				~ListTasksRequest();

				std::string getSubmitTime()const;
				void setSubmitTime(const std::string& submitTime);
				int getRunStatus()const;
				void setRunStatus(int runStatus);
				int getProductType()const;
				void setProductType(int productType);
				int getPageNo()const;
				void setPageNo(int pageNo);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getAppkey()const;
				void setAppkey(const std::string& appkey);
				std::string getJobName()const;
				void setJobName(const std::string& jobName);

            private:
				std::string submitTime_;
				int runStatus_;
				int productType_;
				int pageNo_;
				int pageSize_;
				std::string appkey_;
				std::string jobName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RSIMGANALYS_MODEL_LISTTASKSREQUEST_H_