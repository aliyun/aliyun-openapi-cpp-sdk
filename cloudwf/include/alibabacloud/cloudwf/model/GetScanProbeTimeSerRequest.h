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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_GETSCANPROBETIMESERREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_GETSCANPROBETIMESERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT GetScanProbeTimeSerRequest : public RpcServiceRequest
			{

			public:
				GetScanProbeTimeSerRequest();
				~GetScanProbeTimeSerRequest();

				long getZoomStart()const;
				void setZoomStart(long zoomStart);
				long getCompanyId()const;
				void setCompanyId(long companyId);
				long getApgroupId()const;
				void setApgroupId(long apgroupId);
				long getStart()const;
				void setStart(long start);
				long getZoomEnd()const;
				void setZoomEnd(long zoomEnd);
				long getEnd()const;
				void setEnd(long end);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long zoomStart_;
				long companyId_;
				long apgroupId_;
				long start_;
				long zoomEnd_;
				long end_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_GETSCANPROBETIMESERREQUEST_H_