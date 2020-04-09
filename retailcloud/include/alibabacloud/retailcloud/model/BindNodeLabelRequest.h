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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_BINDNODELABELREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_BINDNODELABELREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT BindNodeLabelRequest : public RpcServiceRequest
			{

			public:
				BindNodeLabelRequest();
				~BindNodeLabelRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getLabelKey()const;
				void setLabelKey(const std::string& labelKey);
				std::string getLabelValue()const;
				void setLabelValue(const std::string& labelValue);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);

            private:
				std::string instanceId_;
				std::string labelKey_;
				std::string labelValue_;
				std::string clusterId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_BINDNODELABELREQUEST_H_