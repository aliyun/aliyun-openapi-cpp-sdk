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

#ifndef ALIBABACLOUD_ALINLP_MODEL_LISTSERVICEINFOOFSERVICECENTERREQUEST_H_
#define ALIBABACLOUD_ALINLP_MODEL_LISTSERVICEINFOOFSERVICECENTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alinlp/AlinlpExport.h>

namespace AlibabaCloud
{
	namespace Alinlp
	{
		namespace Model
		{
			class ALIBABACLOUD_ALINLP_EXPORT ListServiceInfoOfServiceCenterRequest : public RpcServiceRequest
			{

			public:
				ListServiceInfoOfServiceCenterRequest();
				~ListServiceInfoOfServiceCenterRequest();

				std::string getServiceCode()const;
				void setServiceCode(const std::string& serviceCode);
				std::string getOneLeveCategoryName()const;
				void setOneLeveCategoryName(const std::string& oneLeveCategoryName);
				std::string getTwoLeveCategoryName()const;
				void setTwoLeveCategoryName(const std::string& twoLeveCategoryName);

            private:
				std::string serviceCode_;
				std::string oneLeveCategoryName_;
				std::string twoLeveCategoryName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALINLP_MODEL_LISTSERVICEINFOOFSERVICECENTERREQUEST_H_