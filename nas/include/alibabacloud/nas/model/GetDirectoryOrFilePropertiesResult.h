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

#ifndef ALIBABACLOUD_NAS_MODEL_GETDIRECTORYORFILEPROPERTIESRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_GETDIRECTORYORFILEPROPERTIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT GetDirectoryOrFilePropertiesResult : public ServiceResult
			{
			public:
				struct Entry
				{
					bool hasArchiveFile;
					std::string type;
					std::string storageType;
					std::string inode;
					std::string aTime;
					bool hasInfrequentAccessFile;
					long size;
					std::string cTime;
					std::string retrieveTime;
					std::string mTime;
					std::string name;
				};


				GetDirectoryOrFilePropertiesResult();
				explicit GetDirectoryOrFilePropertiesResult(const std::string &payload);
				~GetDirectoryOrFilePropertiesResult();
				Entry getEntry()const;

			protected:
				void parse(const std::string &payload);
			private:
				Entry entry_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_GETDIRECTORYORFILEPROPERTIESRESULT_H_