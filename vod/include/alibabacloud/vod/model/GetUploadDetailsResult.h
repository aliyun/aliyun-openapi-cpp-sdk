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

#ifndef ALIBABACLOUD_VOD_MODEL_GETUPLOADDETAILSRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETUPLOADDETAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetUploadDetailsResult : public ServiceResult
			{
			public:
				struct UploadDetail
				{
					std::string status;
					std::string deviceModel;
					std::string title;
					std::string modificationTime;
					float uploadRatio;
					std::string uploadSource;
					std::string mediaId;
					std::string completionTime;
					long uploadSize;
					std::string uploadStatus;
					std::string creationTime;
					std::string uploadIP;
					long fileSize;
				};


				GetUploadDetailsResult();
				explicit GetUploadDetailsResult(const std::string &payload);
				~GetUploadDetailsResult();
				std::vector<std::string> getNonExistMediaIds()const;
				std::vector<UploadDetail> getUploadDetails()const;
				std::vector<std::string> getForbiddenMediaIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistMediaIds_;
				std::vector<UploadDetail> uploadDetails_;
				std::vector<std::string> forbiddenMediaIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETUPLOADDETAILSRESULT_H_