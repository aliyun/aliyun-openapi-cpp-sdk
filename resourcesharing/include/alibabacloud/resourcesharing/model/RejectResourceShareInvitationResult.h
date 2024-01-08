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

#ifndef ALIBABACLOUD_RESOURCESHARING_MODEL_REJECTRESOURCESHAREINVITATIONRESULT_H_
#define ALIBABACLOUD_RESOURCESHARING_MODEL_REJECTRESOURCESHAREINVITATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcesharing/ResourceSharingExport.h>

namespace AlibabaCloud
{
	namespace ResourceSharing
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCESHARING_EXPORT RejectResourceShareInvitationResult : public ServiceResult
			{
			public:
				struct ResourceShareInvitation
				{
					std::string resourceShareId;
					std::string resourceShareName;
					std::string status;
					std::string senderAccountId;
					std::string receiverAccountId;
					std::string createTime;
					std::string resourceShareInvitationId;
				};


				RejectResourceShareInvitationResult();
				explicit RejectResourceShareInvitationResult(const std::string &payload);
				~RejectResourceShareInvitationResult();
				ResourceShareInvitation getResourceShareInvitation()const;

			protected:
				void parse(const std::string &payload);
			private:
				ResourceShareInvitation resourceShareInvitation_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCESHARING_MODEL_REJECTRESOURCESHAREINVITATIONRESULT_H_