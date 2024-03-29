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

#ifndef ALIBABACLOUD_ICE_MODEL_GETURLUPLOADINFOSRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETURLUPLOADINFOSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT GetUrlUploadInfosResult : public ServiceResult
			{
			public:
				struct UrlUploadJobInfoDTO
				{
					std::string status;
					std::string uploadURL;
					std::string mediaId;
					std::string userData;
					std::string creationTime;
					std::string errorCode;
					std::string errorMessage;
					std::string completeTime;
					std::string jobId;
					std::string fileSize;
				};


				GetUrlUploadInfosResult();
				explicit GetUrlUploadInfosResult(const std::string &payload);
				~GetUrlUploadInfosResult();
				std::vector<UrlUploadJobInfoDTO> getURLUploadInfoList()const;
				std::vector<std::string> getNonExists()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<UrlUploadJobInfoDTO> uRLUploadInfoList_;
				std::vector<std::string> nonExists_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETURLUPLOADINFOSRESULT_H_