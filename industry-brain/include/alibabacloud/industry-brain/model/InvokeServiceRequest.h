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

#ifndef ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_INVOKESERVICEREQUEST_H_
#define ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_INVOKESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/industry-brain/Industry_brainExport.h>

namespace AlibabaCloud
{
	namespace Industry_brain
	{
		namespace Model
		{
			class ALIBABACLOUD_INDUSTRY_BRAIN_EXPORT InvokeServiceRequest : public RpcServiceRequest
			{

			public:
				InvokeServiceRequest();
				~InvokeServiceRequest();

				std::string getRequestParams()const;
				void setRequestParams(const std::string& requestParams);
				bool getShowBizInfo()const;
				void setShowBizInfo(bool showBizInfo);
				bool getForceInvokeConfiguration()const;
				void setForceInvokeConfiguration(bool forceInvokeConfiguration);
				std::string getContext()const;
				void setContext(const std::string& context);
				std::string getServiceId()const;
				void setServiceId(const std::string& serviceId);
				std::string getRequestData()const;
				void setRequestData(const std::string& requestData);
				bool getShowParams()const;
				void setShowParams(bool showParams);

            private:
				std::string requestParams_;
				bool showBizInfo_;
				bool forceInvokeConfiguration_;
				std::string context_;
				std::string serviceId_;
				std::string requestData_;
				bool showParams_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_INVOKESERVICEREQUEST_H_