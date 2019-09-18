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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_MODIFYEVENTSTATUSREQUEST_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_MODIFYEVENTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT ModifyEventStatusRequest : public RpcServiceRequest
			{

			public:
				ModifyEventStatusRequest();
				~ModifyEventStatusRequest();

				bool getBacked()const;
				void setBacked(bool backed);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getDealReason()const;
				void setDealReason(const std::string& dealReason);
				long getId()const;
				void setId(long id);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				int getStatus()const;
				void setStatus(int status);

            private:
				bool backed_;
				std::string sourceIp_;
				std::string dealReason_;
				long id_;
				std::string lang_;
				int featureType_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_MODIFYEVENTSTATUSREQUEST_H_