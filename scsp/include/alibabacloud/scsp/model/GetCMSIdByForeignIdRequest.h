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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETCMSIDBYFOREIGNIDREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_GETCMSIDBYFOREIGNIDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT GetCMSIdByForeignIdRequest : public RpcServiceRequest
			{

			public:
				GetCMSIdByForeignIdRequest();
				~GetCMSIdByForeignIdRequest();

				std::string getNick()const;
				void setNick(const std::string& nick);
				long getSourceId()const;
				void setSourceId(long sourceId);
				std::string getForeignId()const;
				void setForeignId(const std::string& foreignId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				std::string nick_;
				long sourceId_;
				std::string foreignId_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETCMSIDBYFOREIGNIDREQUEST_H_