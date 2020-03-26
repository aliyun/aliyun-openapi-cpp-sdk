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

#ifndef ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERTAGSREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERTAGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT ModifyClusterTagsRequest : public RoaServiceRequest
			{

			public:
				ModifyClusterTagsRequest();
				~ModifyClusterTagsRequest();

				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getValue()const;
				void setValue(const std::string& value);
				std::string getKey()const;
				void setKey(const std::string& key);

            private:
				std::string clusterId_;
				std::string value_;
				std::string key_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERTAGSREQUEST_H_