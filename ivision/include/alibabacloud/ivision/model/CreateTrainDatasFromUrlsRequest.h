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

#ifndef ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATASFROMURLSREQUEST_H_
#define ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATASFROMURLSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivision/IvisionExport.h>

namespace AlibabaCloud
{
	namespace Ivision
	{
		namespace Model
		{
			class ALIBABACLOUD_IVISION_EXPORT CreateTrainDatasFromUrlsRequest : public RpcServiceRequest
			{

			public:
				CreateTrainDatasFromUrlsRequest();
				~CreateTrainDatasFromUrlsRequest();

				std::string getUrls()const;
				void setUrls(const std::string& urls);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getTagId()const;
				void setTagId(const std::string& tagId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string urls_;
				std::string projectId_;
				std::string showLog_;
				std::string tagId_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATASFROMURLSREQUEST_H_