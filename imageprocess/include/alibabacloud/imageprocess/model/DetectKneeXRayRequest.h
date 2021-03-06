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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTKNEEXRAYREQUEST_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTKNEEXRAYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/imageprocess/ImageprocessExport.h>

namespace AlibabaCloud
{
	namespace Imageprocess
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGEPROCESS_EXPORT DetectKneeXRayRequest : public RpcServiceRequest
			{

			public:
				DetectKneeXRayRequest();
				~DetectKneeXRayRequest();

				std::string getDataFormat()const;
				void setDataFormat(const std::string& dataFormat);
				std::string getUrl()const;
				void setUrl(const std::string& url);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);
				std::string getOrgName()const;
				void setOrgName(const std::string& orgName);

            private:
				std::string dataFormat_;
				std::string url_;
				std::string orgId_;
				std::string orgName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTKNEEXRAYREQUEST_H_