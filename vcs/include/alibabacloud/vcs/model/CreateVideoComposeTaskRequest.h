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

#ifndef ALIBABACLOUD_VCS_MODEL_CREATEVIDEOCOMPOSETASKREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_CREATEVIDEOCOMPOSETASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT CreateVideoComposeTaskRequest : public RpcServiceRequest
			{

			public:
				CreateVideoComposeTaskRequest();
				~CreateVideoComposeTaskRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				int getVideoFrameRate()const;
				void setVideoFrameRate(int videoFrameRate);
				std::string getImageFileNames()const;
				void setImageFileNames(const std::string& imageFileNames);
				std::string getAudioFileName()const;
				void setAudioFileName(const std::string& audioFileName);
				std::string getBucketName()const;
				void setBucketName(const std::string& bucketName);
				std::string getImageParameters()const;
				void setImageParameters(const std::string& imageParameters);
				std::string getVideoFormat()const;
				void setVideoFormat(const std::string& videoFormat);

            private:
				std::string corpId_;
				std::string domainName_;
				int videoFrameRate_;
				std::string imageFileNames_;
				std::string audioFileName_;
				std::string bucketName_;
				std::string imageParameters_;
				std::string videoFormat_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_CREATEVIDEOCOMPOSETASKREQUEST_H_