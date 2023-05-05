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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATECDSFILESHARELINKRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_CREATECDSFILESHARELINKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT CreateCdsFileShareLinkResult : public ServiceResult
			{
			public:
				struct Data
				{
					long previewCount;
					std::string description;
					long saveLimit;
					long downloadLimit;
					std::string shareName;
					std::string driveId;
					std::string creator;
					bool disablePreview;
					long videoPreviewCount;
					std::string shareId;
					bool disableDownload;
					std::string status;
					std::string createTime;
					std::string expiration;
					bool expired;
					long saveCount;
					std::string modifiyTime;
					long reportCount;
					long previewLimit;
					bool disableSave;
					std::string sharePwd;
					std::string shareLink;
					std::string fileIds;
					long downloadCount;
					long accessCount;
				};


				CreateCdsFileShareLinkResult();
				explicit CreateCdsFileShareLinkResult(const std::string &payload);
				~CreateCdsFileShareLinkResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_CREATECDSFILESHARELINKRESULT_H_