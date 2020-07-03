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

#ifndef ALIBABACLOUD_AIREC_MODEL_LISTSCENEITEMSREQUEST_H_
#define ALIBABACLOUD_AIREC_MODEL_LISTSCENEITEMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT ListSceneItemsRequest : public RoaServiceRequest
			{

			public:
				ListSceneItemsRequest();
				~ListSceneItemsRequest();

				std::string getSelectionRuleId()const;
				void setSelectionRuleId(const std::string& selectionRuleId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getSize()const;
				void setSize(int size);
				int getQueryCount()const;
				void setQueryCount(int queryCount);
				std::string getSceneId()const;
				void setSceneId(const std::string& sceneId);
				std::string getOperationRuleId()const;
				void setOperationRuleId(const std::string& operationRuleId);
				std::string getPreviewType()const;
				void setPreviewType(const std::string& previewType);
				int getPage()const;
				void setPage(int page);

            private:
				std::string selectionRuleId_;
				std::string instanceId_;
				int size_;
				int queryCount_;
				std::string sceneId_;
				std::string operationRuleId_;
				std::string previewType_;
				int page_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_LISTSCENEITEMSREQUEST_H_