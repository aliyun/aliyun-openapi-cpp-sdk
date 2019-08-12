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

#ifndef ALIBABACLOUD_VOD_MODEL_GETMEZZANINEINFOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETMEZZANINEINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetMezzanineInfoRequest : public RpcServiceRequest
			{

			public:
				GetMezzanineInfoRequest();
				~GetMezzanineInfoRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				bool getPreviewSegment()const;
				void setPreviewSegment(bool previewSegment);
				std::string getOutputType()const;
				void setOutputType(const std::string& outputType);
				std::string getAdditionType()const;
				void setAdditionType(const std::string& additionType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getAuthTimeout()const;
				void setAuthTimeout(long authTimeout);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string videoId_;
				bool previewSegment_;
				std::string outputType_;
				std::string additionType_;
				long ownerId_;
				long authTimeout_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETMEZZANINEINFOREQUEST_H_