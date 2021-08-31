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

#ifndef ALIBABACLOUD_EDAS_MODEL_VALIDATEK8SRESOURCEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_VALIDATEK8SRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ValidateK8sResourceRequest : public RoaServiceRequest
			{

			public:
				ValidateK8sResourceRequest();
				~ValidateK8sResourceRequest();

				std::string getKind()const;
				void setKind(const std::string& kind);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getFormat()const;
				void setFormat(const std::string& format);
				std::string getContent()const;
				void setContent(const std::string& content);

            private:
				std::string kind_;
				std::string appId_;
				std::string _namespace_;
				std::string format_;
				std::string content_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_VALIDATEK8SRESOURCEREQUEST_H_