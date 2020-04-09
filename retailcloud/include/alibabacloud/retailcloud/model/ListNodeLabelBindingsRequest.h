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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_LISTNODELABELBINDINGSREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_LISTNODELABELBINDINGSREQUEST_H_

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
			class ALIBABACLOUD_RETAILCLOUD_EXPORT ListNodeLabelBindingsRequest : public RpcServiceRequest
			{

			public:
				ListNodeLabelBindingsRequest();
				~ListNodeLabelBindingsRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getLabelKey()const;
				void setLabelKey(const std::string& labelKey);
				std::string getLabelValue()const;
				void setLabelValue(const std::string& labelValue);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string instanceId_;
				std::string labelKey_;
				std::string labelValue_;
				int pageSize_;
				std::string clusterId_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_LISTNODELABELBINDINGSREQUEST_H_