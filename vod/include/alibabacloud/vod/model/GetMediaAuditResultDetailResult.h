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

#ifndef ALIBABACLOUD_VOD_MODEL_GETMEDIAAUDITRESULTDETAILRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETMEDIAAUDITRESULTDETAILRESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetMediaAuditResultDetailResult : public ServiceResult
			{
			public:
				struct MediaAuditResultDetail
				{
					struct ListItem
					{
						std::string logoLabel;
						std::string liveScore;
						std::string pornLabel;
						std::string terrorismLabel;
						std::string terrorismScore;
						std::string adScore;
						std::string adLabel;
						std::string pornScore;
						std::string logoScore;
						std::string liveLabel;
						std::string timestamp;
						std::string url;
					};
					int total;
					std::vector<ListItem> list;
				};


				GetMediaAuditResultDetailResult();
				explicit GetMediaAuditResultDetailResult(const std::string &payload);
				~GetMediaAuditResultDetailResult();
				MediaAuditResultDetail getMediaAuditResultDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				MediaAuditResultDetail mediaAuditResultDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETMEDIAAUDITRESULTDETAILRESULT_H_