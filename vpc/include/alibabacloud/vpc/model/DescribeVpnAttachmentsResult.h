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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNATTACHMENTSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNATTACHMENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeVpnAttachmentsResult : public ServiceResult
			{
			public:
				struct VpnAttachment
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string attachType;
					std::string description;
					std::string instanceId;
					std::string transitRouterName;
					bool crossAccountAuthorized;
					std::string tag;
					std::vector<VpnAttachment::Tag> tags;
					std::string name;
					std::string transitRouterId;
				};


				DescribeVpnAttachmentsResult();
				explicit DescribeVpnAttachmentsResult(const std::string &payload);
				~DescribeVpnAttachmentsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<VpnAttachment> getVpnAttachments()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<VpnAttachment> vpnAttachments_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNATTACHMENTSRESULT_H_